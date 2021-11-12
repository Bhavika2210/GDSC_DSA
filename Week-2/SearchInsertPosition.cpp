/*Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
https://leetcode.com/problems/search-insert-position/  */


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int mid=0,found=0 ;
      
        while(low<=high)
        {
            mid=(low+high)/2;
            if(nums[mid]==target)
            {
                found++;
                return mid;
            }
            else if(nums[mid]>target)
            {
                high=mid-1;
            }
            else
                low=mid+1;                    
        }
          return low;                
    }     
    
};

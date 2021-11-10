/* Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
https://leetcode.com/problems/3sum/
*/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int left,right,i=0;
        vector<vector<int>>answer;
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(i=0;i<n-2;i++)//n-2 because l is i+1 and r is n-1
        {
            
            if(i==0 || (i>0 && (nums[i]!=nums[i-1])))
            {
                
                left=i+1;
                right=n-1;
                while(left<right)
            {
                if(nums[i]+nums[left]+nums[right]==0)
                {
                     vector<int>temp;
                     temp.push_back(nums[i]);  
                     temp.push_back(nums[left]);
                     temp.push_back(nums[right]);
                    answer.push_back(temp);                
                while(left<right && nums[left]==nums[left+1])
                    left++;
                while(left<right && nums[right]==nums[right-1])
                    right--;
                left++;
                right--;
                }
                else if(nums[left]+nums[right]+nums[i]>0)
                    right--;
                else
                    left++;        
            }
          }
        }
            return answer;
    }
};

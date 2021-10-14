/* Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].*/


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       
         vector<int> out;
        int found=0;
        if(nums.empty())
        {
            out.push_back(-1);
            out.push_back(-1);
            return out;
        }
        for(int i=0;i<nums.size();++i)
        {
            if(nums[i]==target)
            {
                found++;
                out.push_back(i);
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;--i)
        {
            if(nums[i]==target)
            {
                found++;
                out.push_back(i);
                break;
            }
        }
        if(!found)
        {
            out.push_back(-1);
            out.push_back(-1);
        }
        
        return out;
        
    }
};

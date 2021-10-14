//only one pair exists such that the sum of element is equal to the target.



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> x;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(i!=j && (nums[i]+nums[j])==target)
                {
                    x.push_back(i);
                    x.push_back(j);
                    break;
                }
            }
        }
        return x;
        
    }
};


// https://leetcode.com/problems/find-pivot-index/
//LEFT SUM, RIGHT SUM
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum,rightsum,sum=0;
        for(int k=0;k<nums.size();k++)
            {
                sum+=nums[k];
            }
        for(int i=0;i<nums.size();i++)
        {
            leftsum=0,rightsum=0;
            for(int j=0;j<i;j++)
            {
                leftsum+=nums[j];
            }
            rightsum=sum-leftsum-nums[i];
            if(leftsum==rightsum)
                return i;
            
        }
        return -1;
        
    }
};
// BETTER APPROACH : USING accumulate(start,stop,initial) 

class Solution {
public:
int pivotIndex(vector& nums) {
 int sum = accumulate(nums.begin(),nums.end(),0);
 int left = 0,right = sum;
 for(int i=0;i<nums.size();i++){
   right-=nums[i];
   if(left == right) return i;
   left+=nums[i];
  }
 return -1;
 }
};

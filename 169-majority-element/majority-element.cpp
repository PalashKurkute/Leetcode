class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1,n=nums.size();
        int num=0;
        sort(nums.begin(),nums.end());
        if(nums.size()==1)
            return nums[0];

        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                count++;
                if(count>n/2)
                    num=nums[i];
            }
            if (nums[i] != nums[i+1])
                count=1;
        }
        return num;   
    }
};
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int temp;
        int tracker = nums.size();
        int i = 0;

        while(i < tracker)
        {
            if(nums[i] == 0)
            {
                for(int j = i + 1; j < tracker; j++)
                {
                    temp = nums[j];
                    nums[j] = nums[j - 1];
                    nums[j - 1] = temp;
                }

                tracker--;
            }
            else
            {
                i++;
            }
        }
    }
};
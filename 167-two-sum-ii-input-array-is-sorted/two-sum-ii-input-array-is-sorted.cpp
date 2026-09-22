class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result(2);
        int i=0,j=numbers.size()-1;
        int sum=0;

        while(i<j)
        {
            sum=numbers[i]+numbers[j];

            if(sum>target)
            {
                j--;
            }
            else if(sum<target)
            {
                i++;
            }
            else
            {
                result[0]=i+1;
                result[1]=j+1;
                return result;
            }
        }

        return result;
    }
};
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int char1=0;
        int n=columnTitle.size();
        if(columnTitle.size()==1)
        {
            char1= columnTitle[0] - 'A' + 1;
            return char1;
        }
        for(int i=0;i<n;i++)
        {
            char1 = char1 * 26 + (columnTitle[i] - 'A' + 1);
        }
        return char1;
    }
};
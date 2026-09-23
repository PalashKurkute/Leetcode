class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> mp1;
        unordered_map<string, char> mp2;

        string words[300];
        int count = 0;
        string word = "";

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == ' ')
            {
                words[count] = word;
                count++;
                word = "";
            }
            else
            {
                word += s[i];
            }
        }

        words[count] = word;
        count++;

        if(pattern.length() != count)
            return false;

        for(int i = 0; i < pattern.length(); i++)
        {
            char a = pattern[i];
            string b = words[i];

            if(mp1.find(a) != mp1.end() && mp1[a] != b)
                return false;

            if(mp2.find(b) != mp2.end() && mp2[b] != a)
                return false;

            mp1[a] = b;
            mp2[b] = a;
        }

        return true;
    }
};
class Solution {
public:
    string toLowerCase(string str) {
        
        for(int i=0; i<str.length(); i++)
        {
            str[i] = char(tolower(str[i]));
        }
        return str;
        
    }
};
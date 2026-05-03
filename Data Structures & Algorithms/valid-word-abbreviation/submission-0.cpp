class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int i = 0;
        int j = 0;
        while( i < word.size() && j < abbr.size()){
            if(word[i] == abbr[j]){
                i++;
                j++;
            }
            else if (isalpha(abbr[j]) || abbr[j] == '0') {
                return false;
            }
            else {
                int num = 0;
                while(j < abbr.size() && isdigit(abbr[j])){
                    num = num * 10 + (abbr[j] - '0');
                    j++;
                }
                i += num;
            }
        }
        if(i == word.size() && j == abbr.size()){
            return true;
        }
        return false;
    }
};
class Solution {
public:
    bool isPalindrome(string &s, int left, int right){
        //if the char did not match, we can choose to skip left or right
        //so we do that and check for the remaining part to be a palindrome or not.

        while(left < right){
            if(s[left] != s[right]){
                return false;
            }
            else{
                left++;
                right--;
            }
        }
        return true;
    }

    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;
        while(left < right){
            if(s[left] == s[right]){
                left++;
                right--;
            }
            else{
                return isPalindrome(s, left+1, right) || isPalindrome(s, left, right-1);
            }
        }
    }
};
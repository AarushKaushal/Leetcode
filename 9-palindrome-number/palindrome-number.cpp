class Solution {
public:
    bool isPalindrome(int x) {
         int rev = 0;
         int og=x;
        while (x != 0) {
            int digit = x % 10;

            if (x<0)
                return false;
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7))
                return false;

            rev = rev * 10 + digit;
            x /= 10;
        }
        if(og==rev) return true;
        else return false;
    }
};
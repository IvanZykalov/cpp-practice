/**
 * LeetCode 7. Reverse Integer
 * https://leetcode.com/problems/reverse-integer/
 */
#include <iostream>
#include <cmath>



class Solution {
public:
    int reverse(int x) {
        int rev=0;
        while(x!=0){
            int ch=x%10;
            x/=10;
            if((rev > INT_MAX /10 || (rev== INT_MAX/10 && ch > 7)) || (rev < INT_MIN /10 || (rev== INT_MIN/10 && ch < -8))) return 0;
            rev = rev*10 + ch;
        }
        return rev;
    }
};
#include <iostream>
#include <cmath>

bool isPalindrome(int x) {
        int n=x, reversed=0;
        while(x>0){
            reversed= reversed*10 + x%10;
            x=x/10;
        }
        if(reversed == n) return true;
        else return false;
    }
int main(){
    std::cout << isPalindrome(112311);
}
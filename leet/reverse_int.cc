#include <iostream>


//Reverse Int
class Solution {
public:
    int reverse(int x) {
        
        int ans = 0;

        //getting last digit 
        while(x != 0){
            int temp = x % 10; //last digit
            ans = (ans * 10) + temp;
            x /= 10;
        }
        if(x > INT64_MAX || x < INT64_MIN){
            return 0;
        }
        return ans;
    }
};
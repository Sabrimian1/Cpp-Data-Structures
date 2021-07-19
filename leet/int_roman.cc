#include <iostream>


//work in progress
class Solution {
public:
    
    
    
    std::string intToRoman(int num) {
        std::string ans;
        
        
        if (num/10 >= 1 && num/10 < 5){
            int tens = num%10;
            int num_x = num/10;
            for(int i = 1; i <= num_x; i++){
                ans.push_back('X');
            }
            if(tens == 4){
                ans.push_back('IV');
                break;
            }
            if(tens == 9){
                ans.push_back('IX');
                break;
            }else if(tens)
            
        }
        
        if(num/10 >= 5 && num/10 < 10){
            
        }
        
        if(num/10 >= 10 && num/10 < 50){
            
        }
        
        if(num/10 >= 50 && num/10 < 100){
            
        }
    }
};
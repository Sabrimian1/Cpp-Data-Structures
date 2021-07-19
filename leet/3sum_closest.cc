#include <vector>
#include <algorithm>


class Solution {
public:
    int threeSumClosest(std::vector<int>& nums, int target) {
        
        std::vector<int> answers;
        
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                for(int k = j + 1; k < nums.size(); k++){
                    int ans = i + j + k;
                    
                    ans = abs(target - ans);
                    
                    answers.push_back(ans);
                    
                }
            }
        }
        
        int min = *min_element(answers.begin(), answers.end());
        return min;
    }
};


class Solution {
public:
    int threeSumClosest(std::vector<int>& nums, int target) {
        

        int sum = 0, diff = INT_MAX;

        std::sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++){
            int j = i+1, k = nums.size() - 1;

            while (j < k){
                sum = nums[i] + nums[j] + nums[k];
                if(abs(target - sum) < diff){
                    diff = abs(target - sum);
                    
                }
            }
        }

    


    }
};


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> vec;
        if(nums.empty() || nums.size() == 1){
            return {};
        }
        sort(nums.begin(), nums.end());
        int k = nums.size() - 1;
        
        for(int i = 0; i < nums.size() - 2; i++){
            int j = i + 1;
            
            while(j < k){
                if(nums[i] + nums[j] + nums[k] < 0){
                    j++;
                }else if(nums[i] + nums[j] + nums[k] > 0){
                    k--;
                }else{
                    vec.push_back({nums[i], nums[j], nums[k]});
                    break;
                }
                
                continue;
                
            }
        }
        
        return vec;
            
    }
};


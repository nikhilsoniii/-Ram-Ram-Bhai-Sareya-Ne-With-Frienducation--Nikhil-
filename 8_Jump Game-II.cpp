
class Solution {

private:
int func(vector<int> &nums, int  ind, vector<int> &dp){
    if(ind>= nums.size()-1) return 0;

    if(dp[ind]!=-1) return dp[ind];

    int jump= INT_MAX;
    for(int k=1; k<=nums[ind]; k++){
       int check=func(nums, ind+k, dp);
       if (check != INT_MAX) { 
                    jump = min(jump, check + 1);
                }
                else continue;
    }

    return dp[ind]= jump;
}

public:
    int jump(vector<int>& nums) {
        int n= nums.size();
        vector<int> dp(n, -1);
        int ans= func(nums, 0, dp);
        return ans;
        
    }
};

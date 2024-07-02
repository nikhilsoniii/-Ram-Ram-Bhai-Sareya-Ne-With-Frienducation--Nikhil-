// class Solution {

// private:
// bool func(vector<int>& nums, int ind, vector<int> &dp){
//     int n= nums.size();
//     if(ind>=n-1){
//         return true;
//     }

//     if(dp[ind]!=-1){
//         return dp[ind];

//     }

 
//  for(int i=1; i<=nums[ind];i++){
//     if(ind+i<n && func(nums,ind+i, dp)){
//         dp[ind]= 1;
//       return true;
//  }

//  }

//  return false;
// }


// public:
//     bool canJump(vector<int>& nums) {
//     vector<int> dp(nums.size(), -1);
//     return func(nums, 0, dp);

        
        
//     }
// };


class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n= nums.size();
        if(n==1) return true;
        if(nums[0]==0) return false;
        
        
        int max_reach=0;

        for(int i=0; i<n-1;i++){

            if(i>max_reach) return false;
            
             max_reach= max(i+nums[i], max_reach);

        
        }

        if(max_reach>=n-1)
        return true;

        else return false;
   
        
        
    }
};

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n= nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());


        for(int i=0; i<n; i++){
            if(i>0 && nums[i]== nums[i-1]) continue;

            int j= i+1;
            int k =n-1;

            while(j<k){
                int sum= nums[i]+nums[j]+nums[k];

                if(sum<0){
                    j++;
                }

                else if(sum==0){
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j-1]==nums[j]){
                        j++;
                    }

                    while(j<k && nums[k+1]==nums[k]){
                        k--;
                    }
                }

                else{
                    k--;
                }
            }
        }
        return ans;
        
    }
};

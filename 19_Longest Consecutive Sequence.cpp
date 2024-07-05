class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());

        if(nums.size()==0){
            return 0;
        }

        int longest=1;
        int cnt=1;
        int last=INT_MIN;

        for(int i=0; i<n; i++){
            if(nums[i]-1==last){
                cnt++;
                last= nums[i];
                
            }

            else if(nums[i]==last){

            }

            else{
                longest= max(cnt, longest);
                cnt=1;
                last=nums[i];
            }

        }

        return longest= max(cnt, longest);
        
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n= numbers.size();
        int i=0;
        int j=n-1;
        int sum=0;
        while(i<=j){
            sum= numbers[i]+numbers[j];

            if(sum==target){
                return {i+1, j+1};
                break;
            }

            else if(sum>target){
                j--;
            }

            else{
                i++;
            }
        }
         return {-1,-1};
    }  
     
    
};

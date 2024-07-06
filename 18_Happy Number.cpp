class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> st;

        vector<int> hash(10,0);
        for(int i=0; i<10; i++){
            hash[i]= i * i;
        }

        while(true){
        int sum=0;
        while(n>0){
        int digit= n%10;
        sum+= hash[digit];
        n=n/10;
        }
        
        if(sum==1) return true;
        else if(st.find(sum)!=st.end()){
            return false;
        }
        else{
            st.insert(sum);
            n=sum;
        }

      
        }
          return false;


        
    }
};

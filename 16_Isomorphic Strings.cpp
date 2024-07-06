class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n= s.size();
        int m= t.size();

        if(n!=m) return false;

        unordered_map<char, char> mpST;
        unordered_map<char, char> mpTS;

        for(int i=0; i<n; i++){
            char ST= s[i];
            char TS= t[i];

            if(mpST.find(ST)!=mpST.end()){
                if(mpST[ST]!=TS) return false;
            }

            else{
                mpST[ST]= TS;
            }

             if (mpTS.find(TS) != mpTS.end()) {
            if (mpTS[TS] != ST) {
                return false;
            }
        } else {
            mpTS[TS] = ST;
        }
    }

       return true;
    } 
    
   
    
};

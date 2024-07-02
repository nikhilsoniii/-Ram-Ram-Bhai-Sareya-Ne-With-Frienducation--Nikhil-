class Solution {
public:
    int strStr(string haystack, string needle) {
        int n= haystack.size();
        int m= needle.size();

        if(n<m) return -1;
        if(m==0) return 0;
        
        for(int i=0; i<n; i++){
            if(haystack[i]==needle[0]){
               int k=i;
                int j=0;

                while(k<n && j<m){
                    if(haystack[k]==needle[j]){
                        j++;
                        k++;
                    }

                            
                }

                if(j==m) return i;

                

                

            }
            
        }

        return -1;
    
            
    }
};

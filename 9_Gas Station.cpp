class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int netcost=0, temp=0;
        int index;
        for(int i=0; i<n; i++){
            netcost+= (gas[i]-cost[i]);
             temp += gas[i]-cost[i];

            if(temp<0){
                index=i+1;
                temp=0;
            }


        }
        if(netcost<0) return -1;
        else if(index>n) return 0;
        else return index;
   
            



        
    }
};

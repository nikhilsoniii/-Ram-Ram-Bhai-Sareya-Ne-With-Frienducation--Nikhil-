class Solution {

    static bool comp(vector<int> &a, vector<int> &b){
        return a[1]<b[1];
    }


public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n= points.size();
        sort(points.begin(), points.end(), comp);
        int cnt=1;
        int start=points[0][0];
        int end= points[0][1];
        for(int i=1; i<n; i++){

            if(points[i][0]<=end){
               continue;
            }

            else{
               end= points[i][1];
               cnt++;
            }
        }
        
        return cnt;
    }
};

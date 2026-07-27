class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int j=-1;
        int maxDist=0;
        for(int i=0;i<seats.size();i++){
            if(seats[i]==1){
                if(j!=-1) maxDist=max(maxDist,(i-j)/2);
                else maxDist=i;
                j=i;
            }
        }    
        int right=(seats.size()-1)-j;
        maxDist=max(maxDist,right);    
        return maxDist;
    }
};

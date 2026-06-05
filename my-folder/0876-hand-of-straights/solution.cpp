class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0) return false;
        map<int,int> mp;
        for(int n:hand) mp[n]++;
        for(auto i=mp.begin();i!=mp.end();i++){
            int num=i->first;
            int count=i->second;
            if(count==0) continue;
            for(int j=1;j<groupSize;j++){
                int nextnum=num+j;
                if(mp[nextnum]<count) return false;
                mp[nextnum]-=count;
            }
        }       
        return true;
    }
};

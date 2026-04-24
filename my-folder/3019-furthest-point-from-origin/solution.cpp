class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int count=0;
        int count_=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L') count--;
            else if(moves[i]=='R') count++;
            else count_++;
        }      
        return abs(count)+count_;
    }
};

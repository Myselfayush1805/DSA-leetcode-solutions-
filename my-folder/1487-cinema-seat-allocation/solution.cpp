class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int,vector<bool>> reserved;
        for(const auto& seat:reservedSeats){
            int row=seat[0];
            int col=seat[1];
            if(reserved.find(row)==reserved.end()) reserved[row]=vector<bool>(11,false);
            reserved[row][col]=true;
        }
        int count=(n-reserved.size())*2;
        for(const auto&[row,seats]:reserved){
            bool left=!seats[2] && !seats[3] && !seats[4] && !seats[5];
            bool middle=!seats[4] && !seats[5] && !seats[6] && !seats[7];
            bool right=!seats[6] && !seats[7] && !seats[8] && !seats[9];
            if(left && right) count+=2;
            else if(left || right || middle) count++;
        }   
        return count;
    }
};

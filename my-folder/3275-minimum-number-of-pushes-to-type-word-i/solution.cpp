class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        int total=0;
        for(int i=0;i<n;i++){
            int push=(i/8)+1;
            total+=push;
        }
        return total;
    }
};

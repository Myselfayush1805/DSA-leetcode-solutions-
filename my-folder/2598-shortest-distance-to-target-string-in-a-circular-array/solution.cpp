class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int ans=INT_MAX;
        for(int i=0;i<words.size();i++){
            if(words[i]==target){
                int front=abs(i-startIndex);
                int back=words.size()-front;
                int mindist=min(front,back);
                ans=min(ans,mindist);
            }
        } 
        return (ans==INT_MAX) ? -1:ans;           
    }
};

class Solution {
public:
    long long calculateScore(vector<string>& instructions, vector<int>& values) {
        int n=values.size();
        vector<bool> visited(n,false);
        long long ans=0;
        int i=0;
        while(i>=0 && i<n){
            if(visited[i]==false){
                visited[i]=true;
                if(instructions[i]=="add"){
                    ans+=values[i];
                    i++;
                }
                else i+=values[i];
            }
            else break;
        }      
        return ans;
    }
};

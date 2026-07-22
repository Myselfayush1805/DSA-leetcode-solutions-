class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26,0);
        for(char c:tasks) freq[c-'A']++;     
        int a=*max_element(freq.begin(),freq.end());
        int counter=0;
        for(int i=0;i<freq.size();i++){
            if(freq[i]==a) counter++;
        }
        int count=(a-1)*(n+1);
        return max((int)tasks.size(),count+counter);
    }
};

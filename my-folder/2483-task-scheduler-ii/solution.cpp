class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
        unordered_map<int,long long> freq;
        long long count=0;
        for(int i=0;i<tasks.size();i++){
            count++;
            if(freq.count(tasks[i])){
                count=max(count,freq[tasks[i]]+space+1);
            }
            freq[tasks[i]]=count;
        }
        return count;
    }
};

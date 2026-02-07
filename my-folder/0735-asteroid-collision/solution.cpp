class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>res;
        for(int n:asteroids){
            bool alive=true;
            while(alive && !res.empty() && n<0 && res.back()>0){
                if(abs(res.back())<abs(n)){
                    res.pop_back();
                }
                else if(abs(res.back())==abs(n)){
                    res.pop_back();
                    alive=false;
                }
                else{
                    alive=false;
                }
            }
            if(alive){
                res.push_back(n);
            }
        }   
        return res;    
    }
};

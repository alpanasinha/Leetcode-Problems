//problem 1436

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        
        unordered_set<string> s;
        
        for(int i =0; i< paths.size() ; i++){
            s.insert(paths[i][0]);
            s.insert(paths[i][1]);
        }
        
        int n = s.size();
        
        unordered_map<string ,string > m;
        
        for(int i = 0; i< paths.size() ; i++){
            m[paths[i][0]] = paths[i][1];
        }
        
        for(auto i : s){
            if(m.find(i) == m.end()){
                return i;
            }
        }
        
        return " ";
        
    }
};
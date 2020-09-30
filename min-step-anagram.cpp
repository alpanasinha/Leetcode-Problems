//problem 1347
class Solution {
public:
    int minSteps(string s, string t)
    {
        unordered_map<char , int > m1 , m2;
        
        for(auto i : s){
            m1[i]++;
        }
        for(auto i : t){
            m2[i]++;
        }
        int count = 0;
        for(auto i : m1){
            if(m2.count(i.first)){
                
                count+= abs(m2[i.first] - i.second);
                
                i.second =0;
                m2[i.first] = 0;
            }
            
            else{
                count+=i.second;
            }
        }
        
        for(auto i : m2){
            count+= i.second;
        }
        
        return count/2;
    }
};
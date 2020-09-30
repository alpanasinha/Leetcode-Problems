class Solution {
public:
    int maxArea(vector<int>& height) {
        int i =0, j = height.size()-1;
        int val = INT_MIN;
        while(i<j){
            val = max(val , (j-i)*(min(height[i] , height[j])));
            if(height[i] < height[j]) i++;
            
            else j--;    
        }
        return val;
    }
};
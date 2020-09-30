class Solution {
public:
    int subtractProductAndSum(int n) {
        int p = 1; int s = 0; int temp = n;
        while(temp>0)
        {
            p = p*(temp%10);
            s += temp%10;
            temp /= 10;
        }
        return p-s;
    }
};
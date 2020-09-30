class Solution {
public:
	int op_power_two(int i) { 
		return i*i; 
	}
	vector sortedSquares(vector& A) {
		std::transform(A.begin(), A.end(), A.begin(), op_power_two);
		std::sort(A.begin(), A.end());
		return A;
	}
};

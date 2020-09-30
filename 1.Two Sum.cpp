class Solution {
public:
vector<int> twoSum(vector<int> &numbers, int target)
	{
		unordered_map<int, int> m;
		vector<int> result;
		for (int i = 0; i < numbers.size(); i++) {
			int numberToFind = target - numbers[i];

			if (m.find(numberToFind) != m.end()) {
				result.push_back(m[numberToFind]);
				result.push_back(i);			
				return result;
			}

			m[numbers[i]] = i;
		}
		return result;
	}
};
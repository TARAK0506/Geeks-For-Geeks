class Solution {
	const long long MOD = 1e9 + 7;
	public:
	vector<int> factorial(vector<int> &arr) {
		int mx = *max_element(arr.begin(), arr.end());
		vector<int> fact(mx + 1);
		fact[0] = 1;
		for (int i = 1; i <= mx; i++) {
			fact[i] = (1LL* fact[i - 1] * i) % MOD;
		}
		vector<int> nums;
		for (auto& ele : arr) {
			nums.emplace_back(fact[ele]);
		}
		return nums;
	}
};

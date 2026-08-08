class Solution {
	const int MOD = 1e9 + 7;
	public:
	long long binExp(long long a, long long b) {
		long long res = 1;
		while (b) {
			if ((b & 1)) {
				res = (res * a) % MOD;
			}
			a = (a * a) % MOD;
			b >>= 1;
		}
		return res;
	}
	int karyTree(int n, int m) {
		return binExp(n, m);
	}
};

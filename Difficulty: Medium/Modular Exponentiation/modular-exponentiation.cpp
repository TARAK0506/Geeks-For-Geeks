class Solution {
	public:
	int powMod(int x, int n, int M) {
		if (n == 0)
			return 1;
		long long half = powMod(x, n / 2, M);
		long long res = (long long)(half * half) % M;
		if ((n & 1))
			res = (long long)(res * x) % M;
		return res;
	}
};

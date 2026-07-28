class Solution {
	int n;
	vector<long long> seg;
	public:
	long long getLCM(long long a, long long b) {
		if (a == 0 || b == 0)
			return 0;
		return (a / __gcd(a, b)) * b;
	}
	
	void buildTree(int idx, int low, int high, vector<int>& arr) {
		if (low == high) {
			seg[idx] = 1LL * arr[low];
			return;
		}
		
		long long mid = low + (high - low) / 2;
		buildTree(2 * idx + 1, low, mid, arr);
		buildTree(2 * idx + 2, mid + 1, high, arr);
		seg[idx] = getLCM(seg[2 * idx + 1], seg[2 * idx + 2]);
	}
	
	void update(int idx, int low, int high, int index, int value) {
		if (low == high) {
			seg[idx] = 1LL * value;
			return;
		}
		
		int mid = low + (high - low) / 2;
		if (index <= mid)
			update(2 * idx + 1, low, mid, index, value);
		else
			update(2 * idx + 2, mid + 1, high, index, value);
		
		seg[idx] = getLCM(seg[2 * idx + 1], seg[2 * idx + 2]);
	}
	
	long long query(int idx, int low, int high, int left, int right) {
		if (right < low || high < left) {
			return 1LL;
		}
		
		if (low >= left && high <= right) {
			return seg[idx];
		}
		
		long long mid = low + (high - low) / 2;
		long long l = query(2 * idx + 1, low, mid, left, right);
		long long r = query(2 * idx + 2, mid + 1, high, left, right);
		return getLCM(l, r);
	}
	
	void pointUpdate(int index, int value) {
		update(0, 0, n - 1, index, value);
	}
	
	long long rangeQuery(int left, int right) {
		return query(0, 0, n - 1, left, right);
	}
	
	vector<long long> RangeLCMQuery(vector<int> &arr, vector<vector<int>> &queries) {
		n = arr.size();
		seg.resize(4 * n);
		buildTree(0, 0, n - 1, arr);
		vector<long long> ans;
		for (auto& q : queries) {
			int type = q[0];
			if (type == 1) {
				int idx = q[1], val = q[2];
				pointUpdate(idx, val);
			}
			else {
				int l = q[1], r = q[2];
				long long rangeLCM = rangeQuery(l, r);
				ans.emplace_back(rangeLCM);
			}
		}
		return ans;
	}
};

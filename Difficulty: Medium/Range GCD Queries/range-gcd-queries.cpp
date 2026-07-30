class Solution {
	int n;
	vector<int> seg;
	int computeGCD(int a, int b) {
		if (b == 0)
			return a;
		return computeGCD(b, a % b);
	}
	void buildTree(int idx, int low, int high, vector<int> & arr) {
		if (low == high) {
			seg[idx] = arr[low];
			return ;
		}
		
		int mid = low + (high - low) / 2;
		buildTree(2 * idx + 1, low, mid, arr);
		buildTree(2 * idx + 2, mid + 1, high, arr);
		
		seg[idx] = computeGCD(seg[2 * idx + 1], seg[2 * idx + 2]);
	}
	
	void update(int idx, int low, int high, int index, int value) {
		if (low == high) {
			seg[idx] = value;
			return ;
		}
		
		int mid = low + (high - low) / 2;
		if (index <= mid) {
			update(2 * idx + 1, low, mid, index, value);
		}
		else {
			update(2 * idx + 2, mid + 1, high, index, value);
		}
		
		seg[idx] = computeGCD(seg[2 * idx + 1], seg[2 * idx + 2]);
	}
	int query(int idx, int low, int high, int left, int right) {
		if (right < low || high < left) {
			return 0;
		}
		
		if (low >= left && high <= right) {
			return seg[idx];
		}
		
		int mid = low + (high - low) / 2;
		int l = query(2 * idx + 1, low, mid, left, right);
		int r = query(2 * idx + 2, mid + 1, high, left, right);
		return computeGCD(l, r);
	}
	
	int rangeQuery(int left, int right) {
		return query(0, 0, n - 1, left, right);
	}
	void pointUpdate(int index, int value) {
		update(0, 0, n - 1, index, value);
	}
	public:
	vector<int> rangeGcdQueries(vector<int>& arr, vector<vector<int>> & queries) {
		n = arr.size();
		seg.resize(4 * n);
		buildTree(0, 0, n - 1, arr);
		
		vector<int> ans;
		for (auto& query : queries) {
			int type = query[0];
			if (type == 0) {
				int l = query[1], r = query[2];
				int rangeGCD = rangeQuery(l, r);
				ans.emplace_back(rangeGCD);
			}
			else {
				int index = query[1];
				int value = query[2];
				pointUpdate(index, value);
			}
		}
		return ans;
	}
};

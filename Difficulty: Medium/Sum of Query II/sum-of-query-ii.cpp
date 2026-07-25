class Solution {
	vector<int> seg;
	public:
	void buildTree(int idx, int low, int high, int arr[], vector<int>&seg) {
		if (low == high) {
			seg[idx] = arr[low];
			return ;
		}
		int mid = (low + high)>> 1;
		buildTree(2 * idx + 1, low, mid, arr, seg);
		buildTree(2 * idx + 2, mid + 1, high, arr, seg);
		seg[idx] = seg[2 * idx + 1] + seg[2 * idx + 2];
	}
	
	int query(int idx, int low, int high, int left, int right, vector<int>&seg) {
		if (low > right || high < left) {
			return 0;
		}
		if (low >= left && high <= right) {
			return seg[idx];
		}
		
		int mid = (low + high)>> 1;
		int l = query(2 * idx + 1, low, mid, left, right, seg);
		int r = query(2 * idx + 2, mid + 1, high, left, right, seg);
		
		return l + r;
	}
	int sumQuery(int n, int left, int right) {
		return query(0, 0, n - 1, left, right, seg);
	}
	vector<int> querySum(int n, int arr[], int q, int queries[]) {
		seg.resize(4 * n);
		buildTree(0, 0, n - 1, arr, seg);
		vector<int> ans;
		for (int i = 0; i < 2 * q; i += 2) {
			int l = queries[i] - 1;
			int r = queries[i + 1] - 1;
			int sum = sumQuery(n, l, r);
			ans.emplace_back(sum);
		}
		return ans;
	}
};

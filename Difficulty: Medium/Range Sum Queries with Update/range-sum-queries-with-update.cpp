class Solution {
	vector<int> seg;
	int n;
	public:
	void buildTree(int idx, int low, int high, vector<int>& arr, vector<int>& seg) {
		if (low == high) {
			seg[idx] = arr[low];
			return ;
		}
		
		int mid = (low + (high - low) / 2);
		buildTree(2 * idx + 1, low, mid, arr, seg);
		buildTree(2 * idx + 2, mid + 1, high, arr, seg);
		
		seg[idx] = seg[2 * idx + 1] + seg[2 * idx + 2];
		
	}
	
	void update(int idx, int low, int high, int index, int val, vector<int>& seg) {
		if (low == high) {
			seg[idx] = val;
			return ;
		}
		
		int mid = (low + (high - low) / 2);
		if (index <= mid) {
			update(2 * idx + 1, low, mid, index, val, seg);
		}
		else {
			update(2 * idx + 2, mid + 1, high, index, val, seg);
		}
		
		seg[idx] = seg[2 * idx + 1] + seg[2 *idx + 2];
	}
	
	int query(int idx, int low, int high, int left, int right, vector<int>& seg) {
		
		if (low > right || high < left)
			return 0;
		
		if (low >= left && high <= right)
			return seg[idx];
		
		int mid = low + (high - low) / 2;
		
		int leftSum = query(2 * idx + 1, low, mid, left, right, seg);
		int rightSum = query(2 * idx + 2, mid + 1, high, left, right, seg);
		
		return leftSum + rightSum;
	}
	
	int rangeSum(int left, int right) {
		return query(0, 0, n - 1, left, right, seg);
	}
	
	void pointUpdate(int index, int value) {
		update(0, 0, n - 1, index, value, seg);
	}
	vector<int> rangeSumQueries(vector<int>& arr, vector<vector<int>> & queries) {
		n = arr.size();
		seg.resize(4 * n);
		buildTree(0, 0, n - 1, arr, seg);
		vector<int> ans;
		for (int i = 0; i < queries.size(); i++) {
			int type = queries[i][0];
			if (type == 1) {
				int l = queries[i][1];
				int r = queries[i][2];
				
				int sum = rangeSum(l, r);
				ans.emplace_back(sum);
			}
			else {
				int idx = queries[i][1];
				int val = queries[i][2];
				pointUpdate(idx, val);
			}
		}
		return ans;
	}
};

/* The functions which
builds the segment tree */

void buildTree(int idx, int low, int high, int arr[], int st[]) {
	
	if (low == high) {
		st[idx] = arr[low];
		return ;
	}
	
	int mid = low + (high - low) / 2;
	buildTree(2 * idx + 1, low, mid, arr, st);
	buildTree(2 * idx + 2, mid + 1, high, arr, st);
	st[idx] = min(st[2 * idx + 1], st[2 * idx + 2]);
}
int *constructST(int arr[], int n) {
	
	int *st = new int[4 * n];
	buildTree(0, 0, n - 1, arr, st);
	
	return st;
}

int rangeMinQuery(int st[], int idx, int low, int high, int left, int right) {
	if (low > right || high < left)
		return INT_MAX;
	
	if (low >= left && high <= right)
		return st[idx];
	
	int mid = low + (high - low) / 2;
	
	int l = rangeMinQuery(st, 2 * idx + 1, low, mid, left, right);
	int r = rangeMinQuery(st, 2 * idx + 2, mid + 1, high, left, right);
	
	return min(l, r);
}
int RMQ(int st[], int n, int a, int b) {
	return rangeMinQuery(st, 0, 0, n - 1, a, b);
}

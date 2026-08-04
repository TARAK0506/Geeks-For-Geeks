/* Tree Node Structure
class Node {
	public:
	int data;
	Node* left;
	Node* right;
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
}; */

class Solution {
	public:
	int solve(Node* root, int &sum) {
		if (!root)
			return 0;
		sum += root->data;
		solve(root->left, sum);
		solve(root->right, sum);
		return sum;
	}
	int sumBT(Node* root) {
		int sum = 0;
		solve(root, sum);
		return sum;
	}
};

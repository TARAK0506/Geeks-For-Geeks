/* Structure of Binary Tree Node
class Node {
	public:
	int data;
	Node *left;
	Node *right;
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
}; */

class Solution {
	public:
	void solve(Node* root) {
		if (!root)
			return ;
		solve(root->left);
		solve(root->right);
		swap(root->left, root->right);
	}
	void mirror(Node* root) {
		solve(root);
	}
};

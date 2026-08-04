/* Structure of binary tree node
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
	int height(Node* root) {
		if (!root)
			return - 1;
		return 1 + max(height(root->left), height(root->right));
	}
	bool solve(Node* root) {
		if (!root)
			return true;
			
		int leftSubTree = height(root->left);
		int rightSubTree = height(root->right);
		
		if (abs(leftSubTree - rightSubTree) > 1)
			return false;
		return solve(root->left) && solve(root->right);
	}
	bool isBalanced(Node* root) {
		return solve(root);
	}
};

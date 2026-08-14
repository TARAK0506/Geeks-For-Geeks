/* Structure of a Binary Search Tree node
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
	bool solve(Node* root) {
		if (!root)
			return true;
		
		Node* temp = root->left;
		while (temp) {
			if (temp->data >= root->data)
				return false;
			temp = temp->right;
		}
		
		temp = root->right;
		while (temp) {
			if (temp->data <= root->data)
				return false;
			temp = temp->left;
		}
		
		bool left = solve(root->left);
		bool right = solve(root->right);
		
		return left && right;
		
	}
	bool isBST(Node* root) {
		return solve(root);
	}
};

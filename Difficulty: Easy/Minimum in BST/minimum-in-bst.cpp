/*
Definition for Node
class Node {
	public:
	int data;
	Node* left;
	Node* right;
	
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
};
*/

class Solution {
	public:
	int solve(Node* root) {
		if (!root)
			return - 1;
		while (root->left) {
			root = root->left;
		}
		return root->data;
	}
	int minValue(Node* root) {
		return solve(root);
	}
};

/* Structure of a Node
class Node {
	public:
	int data;
	Node* left;
	Node* right;
	
	Node(int x) {
		data = x;
		left = right = nullptr;
	}
}; */

class Solution {
	vector<int> nodes;
	public:
	bool solve(Node* root, int target) {
		
		if (!root)
			return false;
		
		if (root->data == target)
			return true;
		
		if (solve(root->left, target) || solve(root->right, target)) {
			nodes.emplace_back(root->data);
			return true;
		}
		
		return false;
	}
	vector<int> ancestors(Node *root, int target) {
		solve(root, target);
		return nodes;
	}
};

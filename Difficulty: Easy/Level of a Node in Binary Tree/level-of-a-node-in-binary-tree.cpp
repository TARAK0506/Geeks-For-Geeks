/* Structure of tree node
class Node {
	public:
	int data;
	Node* left;
	Node* right;
	Node(int val) {
		data = val;
		left = nullptr;
		right = nullptr;
	}
};
*/
class Solution {
	public:
	int solve(Node* root, int target, int level) {
		if (!root)
			return 0;
		if (root->data == target)
			return level;
		
		int l = solve(root->left, target, level + 1);
		if (l != 0)
			return l;
		return solve(root->right, target, level + 1);
	}
	int getLevel(struct Node *node, int target) {
		int level = solve(node, target, 1);
		return level;
	}
};

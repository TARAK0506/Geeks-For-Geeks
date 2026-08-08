/* Binary Tree Node Structure
class Node {
	public:
	int data;
	Node *left;
	Node *right;
	Node(int x) {
		data = x;
		left = nullptr;
		right = nullptr;
	}
};
*/

class Solution {
	public:
	bool isLeaf(Node* node) {
		return node && !node->left && !node->right;
	}
	int dfs(Node* root, int level) {
		if (!root)
			return 0;
		
		if (isLeaf(root) && (level & 1)) {
			return level;
		}
		
		int l = dfs(root->left, level + 1);
		int r = dfs(root->right, level + 1);
		return max(l, r);
	}
	int depthOfOddLeaf(Node *root) {
		int level = 1;
		return dfs(root, level);
	}
};

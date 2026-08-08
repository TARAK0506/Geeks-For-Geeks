/* Structure of binary tree Node
class Node {
	public:
	int data;
	Node *left, *right;
	Node(int x) {
		data = x;
		left = right = nullptr;
	}
}; */
class Solution {
	Node* first = nullptr;
	public:
	bool isLeaf(Node* node) {
		return node && !node->left && !node->right;
	}
	void dfs(Node* root, int& cnt) {
		if (!root)
			return ;
		
		if (isLeaf(root)) {
			if ((cnt & 1) == 0) {
				first = root;
			}
			else {
				swap(first->data, root->data);
			}
			cnt++;
			return ;
		}
		
		dfs(root->left, cnt);
		dfs(root->right, cnt);
	}
	void pairwiseSwap(Node *root) {
		int cnt = 0;
		dfs(root, cnt);
	}
};

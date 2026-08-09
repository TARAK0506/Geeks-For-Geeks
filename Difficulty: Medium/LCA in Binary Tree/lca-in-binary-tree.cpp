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
	Node* lca(Node* root, int n1, int n2) {
		if (!root || !n1 || !n2)
			return nullptr;
		
		if (root->data == n1 || root->data == n2)
			return root;
		
		Node* l = lca(root->left, n1, n2);
		Node* r = lca(root->right, n1, n2);
		
		if (l && r)
			return root;
		
		return !l ? r : l;
	}
};

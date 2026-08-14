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
	public:
	int solve(Node* root1, Node* root2, int k) {
		
		if (!root1 || !root2)
			return - 1;
		
		if (root1->data == k)
			return root2->data;
		
		int left = solve(root1->left, root2->right, k);
		int right = solve(root1->right, root2->left, k);
		
		return left == -1 ? right : left;
	}
	int findMirror(Node *root, int k) {
		return solve(root, root, k);
	}
};

/*
class Node {
	public:
	int data;
	Node* left;
	Node* right;
	
	Node(int x) {
		data = x;
		left = nullptr;
		right = nullptr;
	}
};
*/
class Solution {
	public:
	bool solve(Node* root1, Node* root2) {
		Node* r1 = root1, *r2 = root2;
		if (!r1 && !r2)
			return true;
		if (!r1 || !r2)
			return false;
		if (r1 ->data != r2->data)
			return false;
		
		return solve(r1->left, r2->left) && solve(r1->right, r2->right);
	}
	bool isIdentical(Node* r1, Node* r2) {
		return solve(r1, r2);
	}
};

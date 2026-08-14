/* Structure of a Binary Search Tree node
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
}; */

class Solution {
	public:
	vector<Node*> findPreSuc(Node* root, int key) {
		Node *predecessor = nullptr, *successor = nullptr;
		Node* curr = root;
		while (curr) {
			if (curr->data < key) {
				predecessor = curr;
				curr = curr->right;
			}
			else {
				curr = curr->left;
			}
		}
		curr = root;
		while (curr) {
			if (curr->data <= key) {
				curr = curr->right;
			}
			else {
				successor = curr;
				curr = curr->left;
			}
		}
		return {predecessor, successor};
	}
};

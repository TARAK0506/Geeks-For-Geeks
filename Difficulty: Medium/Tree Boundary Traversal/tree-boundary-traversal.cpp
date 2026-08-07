/* Node Structure
class Node {
	public:
	int data;
	Node* left, *right;
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
}; */

class Solution {
	vector<int> Nodes;
	
	public:
	bool isLeaf(Node* node) {
		return node && !node->left && !node->right;
	}
	
	void leftBoundary(Node* root) {
		if (!root || isLeaf(root))
			return;
		
		Nodes.push_back(root->data);
		
		if (root->left)
			leftBoundary(root->left);
		else
			leftBoundary(root->right);
	}
	
	void leaveNodes(Node* root) {
		if (!root)
			return;
		
		if (isLeaf(root)) {
			Nodes.push_back(root->data);
			return;
		}
		
		leaveNodes(root->left);
		leaveNodes(root->right);
	}
	
	void rightBoundary(Node* root) {
		if (!root || isLeaf(root))
			return;
		
		if (root->right)
			rightBoundary(root->right);
		else
			rightBoundary(root->left);
		
		Nodes.push_back(root->data);
	}
	
	vector<int> boundaryTraversal(Node *root) {
		if (!root)
			return {};
		
		if (!isLeaf(root))
			Nodes.push_back(root->data);
		
		leftBoundary(root->left);
		leaveNodes(root);
		rightBoundary(root->right);
		
		return Nodes;
	}
};

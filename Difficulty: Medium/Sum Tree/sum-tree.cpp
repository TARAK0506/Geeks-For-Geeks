/* Definition for Node
class Node {
	public:
	int data;
	Node *left;
	Node *right;
	
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
};
*/

class Solution {
	public:
	bool isLeaf(Node* node) {
		return node && !node->left && !node->right;
	}
	int dfs(Node* root) {
		if (!root)
			return 0;
		if (isLeaf(root))
			return root->data;
			
		int leftSum = dfs(root->left);
		if (leftSum == -1)
			return - 1;
		
		int rightSum = dfs(root->right);
		if (rightSum == -1)
			return - 1;
		
		if (root->data != leftSum + rightSum)
			return - 1;
		
		return root->data + leftSum + rightSum;
	}
	bool isSumTree(Node* node) {
		return dfs(node) != -1;
	}
};

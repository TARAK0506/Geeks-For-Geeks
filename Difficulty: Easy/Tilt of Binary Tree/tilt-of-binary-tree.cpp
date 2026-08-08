/*
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x)
	{
		data = x;
		left = NULL;
		right = NULL;
	}
};
*/

class Solution {
	int totalSum;
	public:
	// Your are required to complete this function
	// function should return the tilt of the tree
	bool isLeaf(Node* node) {
		return node && !node->left && !node->right;
	}
	int dfs(Node* root) {
		
		if (!root)
			return 0;
		
		int leftSubTree = dfs(root->left);
		int rightSubTree = dfs(root->right);
		totalSum += abs(leftSubTree - rightSubTree);
		return root->data + leftSubTree + rightSubTree;
	}
	int tiltTree(Node *root) {
		totalSum = 0;
		dfs(root);
		return totalSum;
	}
};

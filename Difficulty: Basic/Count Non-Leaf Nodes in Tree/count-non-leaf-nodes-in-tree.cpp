/*Structure of the node of the tree is as
struct Node
{
	int data;
	struct Node* left;
	struct Node* right;
};
*/
// you are required to complete this function
// the function should return the count of Non-Leaf Nodes
class Solution {
	public:
	bool isLeaf(Node* root) {
		return (root && !root->left && !root->right);
	}
	int solve(Node* root) {
		if (root == NULL)
			return 0;
		
		if (isLeaf(root))
			return 0;
		
		return 1 + solve(root->left) + solve(root->right);
	}
	int countNonLeafNodes(Node* root) {
		return solve(root);
	}
};

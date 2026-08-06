/* Structure of tree Node
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
	int maxLevelSum(Node* root) {
		if (!root)
			return 0;
		queue<Node*> q;
		q.push(root);
		int maxSum = 0;
		while (!q.empty()) {
			int size = q.size();
			int sum = 0;
			for (int i = 0; i < size; i++) {
				Node* curr = q.front();
				q.pop();
				sum += curr->data;
				
				if (curr->left)
					q.push(curr->left);
				if (curr->right)
					q.push(curr->right);
			}
			maxSum = max(maxSum, sum);
		}
		return maxSum;
	}
};

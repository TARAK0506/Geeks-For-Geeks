/*
Definition for Node
class Node {
	public:
	int data;
	Node* left;
	Node* right;
	
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
};
*/

class Solution {
	vector<int> ans;
	
	public:
	vector<int> bottomView(Node *root) {
		map<int, Node*> mp;
		queue<pair<Node*, int>> q;
		q.push({root, 0});
		while (!q.empty()) {
			int size = q.size();
			
			for (int i = 0; i < size; i++) {
				Node* curr = q.front().first;
				int axis = q.front().second;
				q.pop();
				mp[axis] = curr;
				if (curr->left) {
					q.push({curr->left, axis - 1});
				}
				if (curr->right) {
					q.push({curr->right, axis + 1});
				}
			}
		}
		for (auto& [axis, node] : mp) {
			ans.emplace_back(node->data);
		}
		return ans;
	}
};

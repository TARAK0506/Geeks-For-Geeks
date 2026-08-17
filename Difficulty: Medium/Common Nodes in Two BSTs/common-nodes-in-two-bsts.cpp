/* Structure of a Binary Search Tree node
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
	vector<int> arr1, arr2;
	public:
	void inOrder(Node* root, vector<int>& arr) {
		if (!root)
			return ;
		inOrder(root->left, arr);
		arr.emplace_back(root->data);
		inOrder(root->right, arr);
	}
	vector<int> findCommon(Node* r1, Node* r2) {
		vector<int> arr;
		inOrder(r1, arr1);
		inOrder(r2, arr2);
		
		int i = 0, j = 0, n = arr1.size(), m = arr2.size();
		while (i < n && j < m) {
			if (arr1[i] == arr2[j]) {
				arr.emplace_back(arr1[i]);
				i++;
				j++;
			}
			else if (arr1[i] < arr2[j]) {
				i++;
			}
			else {
				j++;
			}
		}
		return arr;
	}
};

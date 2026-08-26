class Solution {
	int n;
	vector<vector<int>> ans;
	struct Node {
		int key;
		Node* next;
		Node(int key) : key(key), next(nullptr) {}
	};
	
	int hashFunction(int key, int m) {
		return key % m;
	}
	public:
	vector<vector<int>> separateChaining(vector<int> &arr, int m) {
		n = arr.size();
		ans.assign(m, {});
		vector<Node*> hashTable;
		hashTable.assign(m, nullptr);
		for (int i = 0; i < n; i++) {
			int hashIdx = hashFunction(arr[i], m);
			auto curr = hashTable[hashIdx];
			Node* newnode = new Node(arr[i]);
			if (!curr) {
				hashTable[hashIdx] = newnode;
			}
			else {
				while (curr->next != nullptr) {
					curr = curr->next;
				}
				curr->next = newnode;
			}
		}
		
		for (int i = 0; i < m; i++) {
			Node* curr = hashTable[i];
			while (curr != nullptr) {
				ans[i].push_back(curr->key);
				curr = curr->next;
			}
		}
		return ans;
	}
};

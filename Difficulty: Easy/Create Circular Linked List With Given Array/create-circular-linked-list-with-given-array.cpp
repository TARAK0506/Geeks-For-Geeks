/*
class Node {
	public:
	int data;
	Node* next;
	
	Node(int d) {
		data = d;
		next = NULL;
	}
};
*/

class Solution {
	public:
	Node* circularLinkedList(vector<int>& arr) {
		if (arr.size() == 0)
			return nullptr;
		Node* head = new Node(arr[0]);
		Node* curr = head;
		for (int i = 1; i < arr.size(); i++) {
			Node* newnode = new Node(arr[i]);
			curr->next = newnode;
			curr = curr->next;
		}
		curr->next = head;
		return head;
	}
};

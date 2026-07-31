/*
class Node {
	int data;
	Node* next;
	
	Node(int x) {
		data = x;
		next = nullptr;
	}
	
}; */

class Solution {
	public:
	int getMiddle(Node* head) {
		Node* slow = head, *fast = head;
		while (fast && fast->next) {
			slow = slow->next;
			fast = fast->next->next;
		}
		return slow->data;
	}
};

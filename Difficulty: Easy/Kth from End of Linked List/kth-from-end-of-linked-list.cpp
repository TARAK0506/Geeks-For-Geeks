/* Structure of Linked List Node
class Node {
	public:
	int data;
	Node* next;
	Node(int x) {
		data = x;
		next = nullptr;
	}
}; */

class Solution {
	public:
	int getKthFromLast(Node* head, int k) {
		Node* fast = head, *slow = head;
		while (k--) {
			if (fast == nullptr)
				return - 1;
			fast = fast->next;
		}
		while (fast) {
			slow = slow->next;
			fast = fast->next;
		}
		return slow->data;
	}
};

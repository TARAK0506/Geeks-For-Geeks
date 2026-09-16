/* Node Structure
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
	
	Node* findMid(Node* head) {
		Node* slow = head, * fast = head->next;
		while (fast && fast->next) {
			slow = slow->next;
			fast = fast->next->next;
		}
		return slow;
	}
	
	Node* reverseList(Node* head) {
		Node* prev = nullptr, *nxt = nullptr;
		Node* curr = head;
		while (curr) {
			nxt = curr->next;
			curr->next = prev;
			prev = curr;
			curr = nxt;
		}
		return prev;
	}
	
	public:
	void reorderList(Node* head) {
		
		if (!head || !head->next)
			return ;
		
		Node* mid = findMid(head);
		Node* l2 = mid->next;
		mid->next = nullptr;
		l2 = reverseList(l2);
		Node* l1 = head;
		
		while (l1 && l2) {
			Node* next1 = l1->next;
			Node* next2 = l2->next;
			
			l1->next = l2;
			l2->next = next1;
			
			l1 = next1;
			l2 = next2;
		}
	}
};

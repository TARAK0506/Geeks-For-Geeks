/* Structure of linked list Node
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
	Node* findMid(Node* head) {
		Node* slow = head, *fast = head->next;
		while (fast && fast->next) {
			slow = slow->next;
			fast = fast->next->next;
		}
		return slow;
	}
	
	Node* merge(Node* left, Node* right) {
		Node* head;
		Node* l1 = left, *l2 = right;
		if (l1->data <= l2->data) {
			head = l1;
			l1 = l1->next;
		}
		else {
			head = l2;
			l2 = l2->next;
		}
		Node* curr = head; 
		while (l1 && l2) {
			if (l1->data <= l2->data) {
				curr->next = l1;
				l1 = l1->next;
			}
			else {
				curr->next = l2;
				l2 = l2->next;
			}
			curr = curr->next;
		}
		if (l1) {
			curr->next = l1;
		}
		else {
			curr->next = l2;
		}
		return head;
	}
	Node* mergeSort(Node* head) {
		
		if (!head || !head->next)
			return head;
		
		Node* mid = findMid(head);
		Node* left = head;
		Node* right = mid->next;
		mid->next = nullptr;
		
		left = mergeSort(left);
		right = mergeSort(right);
		
		return merge(left, right);
	}
};

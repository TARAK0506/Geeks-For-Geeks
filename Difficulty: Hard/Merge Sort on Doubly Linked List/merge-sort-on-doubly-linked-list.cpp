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
		
		if (!left)
			return right;
		if (!right)
			return left;
		Node* l1 = left, *l2 = right;
		
		Node* head;
		if (l1->data <= l2->data) {
			head = l1;
			l1 = l1->next;
		}
		else {
			head = l2;
			l2 = l2->next;
		}
		Node* curr = head;
		curr->prev = nullptr;
		while (l1 && l2) {
			if (l1->data <= l2->data) {
				curr->next = l1;
				l1->prev = curr;
				
				curr = l1;
				l1 = l1->next;
			}
			else {
				curr->next = l2;
				l2->prev = curr;
				
				curr = l2;
				l2 = l2->next;
			}
		}
		if (l1) {
			curr->next = l1;
			l1->prev = curr;
		}
		else if (l2) {
			curr->next = l2;
			l2->prev = curr;
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
		right->prev = nullptr;
		
		left = mergeSort(left);
		right = mergeSort(right);
		
		return merge(left, right);
	}
};

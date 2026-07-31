/* Structure of linked list Node
class Node {
	public:
	int data;
	Node *next;
	
	Node(int x) {
		data = x;
		next = nullptr;
	}
};
*/
class Solution {
	public:
	Node* removeDuplicates(Node* head) {
		Node* curr = head;
		if (!head || !head->next)
			return head;
		while (curr) {
			while (curr->next && curr->data == curr->next->data)
				curr->next = curr->next->next;
			curr = curr->next;
		}
		return head;
	}
};

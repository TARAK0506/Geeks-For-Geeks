/* Structure of Doubly Linked List Node
class Node {
	public:
	int data;
	Node* next;
	Node* prev;
	
	Node(int x) {
		data = x;
		next = prev = nullptr;
	}
};
*/

class Solution {
	public:
	Node* insertAtPos(Node* head, int p, int x) {
		Node* newnode = new Node(x);
		if (!head)
			return newnode;
		
		Node* curr = head;
		for (int i = 0; i < p; i++) {
			curr = curr->next;
		}
		
		if (!curr->next) {
			curr->next = newnode;
			newnode->prev = curr;
		}
		else {
			Node* temp = curr->next;
			curr->next = newnode;
			newnode->prev = curr;
			newnode->next = temp;
			temp->prev = newnode;
		}
		return head;
	}
};

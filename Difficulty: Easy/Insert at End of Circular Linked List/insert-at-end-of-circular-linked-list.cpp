/* Structure of Linked List Node
class Node {
	public:
	int data;
	Node *next;
	
	Node(int x) {
		data = x;
		next = nullptr;
	}
}; */
class Solution {
	public:
	Node* insertAtEnd(Node* head, int key) {
		Node* newnode = new Node(key);
		Node* curr = head;
		while (curr->next != head) {
			curr = curr->next;
		}
		curr->next = newnode;
		newnode->next = head;
		return head;
	}
};

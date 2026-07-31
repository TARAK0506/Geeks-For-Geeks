/* Structure of a link list node
class Node {
	public:
	int data;
	Node* next;
	Node* prev;
	Node(int value) {
		data = value;
		next = nullptr;
		prev = nullptr;
	}
};
*/
class Solution {
	public:
	Node* removeDuplicates(Node* headRef) {
		if (!headRef || !headRef->next)
			return headRef;
		Node* curr = headRef;
		while (curr) {
			while (curr->next && curr->data == curr->next->data) {
				curr->next = curr->next->next;
			}
			curr = curr->next;
		}
		return headRef;
	}
};

/* Node Structure
class Node {
	public:
	int data;
	Node* next;
	
	Node(int x) {
		data = x;
		next = nullptr;
	}
};
*/

class Solution {
	public:
	int getNode(Node* head, int k) {
		int pos = k - 1;
		Node* curr = head;
		while (curr && pos--) {
			curr = curr->next;
		}
		return curr != nullptr ? curr->data : -1;
	}
};

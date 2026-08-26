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
	vector<Node *> mergeList(Node *head1, Node *head2) {
		Node* l1 = head1, *l2 = head2;
		Node* list1 = l1, *list2 = l2;
		while (l1 && l2) {
			Node* temp = l1->next;
			l1->next = l2;
			l1 = l2;
			l2 = l2->next;
			l1->next = temp;
			l1 = l1->next;
		}
		return {list1, l2};
	}
};

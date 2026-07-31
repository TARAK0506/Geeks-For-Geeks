/* Link list Node
struct Node
{
	int data;
	struct Node* next;
	
	Node(int x) {
		data = x;
		next = NULL;
	}
	
};
*/
class Solution {
	public:
	bool isCircular(Node *head) {
		if (!head->next)
			return false;
		Node* slow = head, *fast = head;
		while (fast && fast->next) {
			slow = slow->next;
			fast = fast->next->next;
			if (slow == fast)
				return true;
		}
		return !(slow != fast);
	}
};

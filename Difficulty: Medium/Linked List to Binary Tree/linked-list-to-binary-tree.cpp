/* Linked List Node Structure
class NodeLL {
  public:
    int data;
    NodeLL *next;

    NodeLL(int x) {
        data = x;
        next = nullptr;
    }
};

Binary Tree Node Structure
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    Node *linkedListToBinaryTree(NodeLL *head) {
        if (!head)
			return nullptr;
		Node *root = new Node(head->data);
		queue<Node*> q;
		q.push(root);
		head = head->next;
		while (head) {
			Node *parent = q.front();
			q.pop();
			parent->left = new Node(head->data);
			q.push(parent->left);
			head = head->next;
			if (head) {
				parent->right = new Node(head->data);
				q.push(parent->right);
				head = head->next;
			}
		}
		return root;
    }
};
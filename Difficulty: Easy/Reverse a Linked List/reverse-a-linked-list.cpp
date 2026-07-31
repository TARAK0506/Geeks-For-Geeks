/* Structure of Linked List Node
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = nullptr ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
       Node* prev = nullptr, *curr = head;
       if(!head || !head->next) return head;
       while(curr){
           Node* nxt = curr->next;
           curr->next = prev;
           prev = curr;
           curr = nxt;
       }
       return prev;
    }
};
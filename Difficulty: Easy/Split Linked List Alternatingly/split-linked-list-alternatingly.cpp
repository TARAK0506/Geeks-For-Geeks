class Solution {
public:
    vector<Node*> alternatingSplitList(Node* head) {
        if (head == NULL)
            return {NULL, NULL};

        Node* head1 = head;
        Node* head2 = head->next;

        Node* p1 = head1;
        Node* p2 = head2;

        while (p1 && p2) {
            p1->next = p2->next;
            p1 = p1->next;

            if (p1) {
                p2->next = p1->next;
                p2 = p2->next;
            }
        }

        return {head1, head2};
    }
};
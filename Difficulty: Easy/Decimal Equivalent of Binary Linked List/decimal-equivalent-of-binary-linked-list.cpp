/* LinkedList Node structure
c; ass Node {
	public:
	bool data; // data is either 0 or 1
	Node* next;
	Node(int x) {
		data = x;
		next = nullptr;
	}
}; */

class Solution {
	const int MOD = 1e9 + 7;
	public:
	int decimalValue(Node* head) {
		long long decimal = 0;
		Node* curr = head;
		while (curr) {
			long long bit = curr->data;
			decimal = (decimal * 2) % MOD + bit;
			curr = curr->next;
		}
		return decimal % MOD;
	}
};

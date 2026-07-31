class myStack {
	Node* LL;
	int top;
	
	public:
	myStack() {
		LL = nullptr;
		top = -1;
	}
	
	bool isEmpty() {
		return top == -1;
	}
	
	void push(int x) {
		Node* newnode = new Node(x);
		newnode->next = LL;
		LL = newnode;
		top++;
	}
	
	void pop() {
		if (isEmpty())
			return;
		Node* temp = LL;
		LL = LL->next;
		delete temp;
		top--;
	}
	
	int peek() {
		if (isEmpty())
			return - 1;
		return LL->data;
	}
	
	int size() {
		return top + 1;
	}
};

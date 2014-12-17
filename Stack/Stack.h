//---
//Name: Class stack
//Description: 
//---
class Stack {
	int m_nMemberOfStack;
	int m_nNumnerOfStack;
	Stack * m_next;
public:
	Stack();
	bool empty();
	int size();
	int top();
	int push();
	int pop();
	~Stack();
};


//---
//Name: Class queue
//Description: 
//---
class Queue {
	int * m_nFrontOfQueue;
	int m_nNumberOfQueue;
	int * m_nBackOfQueue;
public:
	Queue();
	bool empty();
	int size();
	int front();
	int back();
	void push(int m_nAddMember);
	void pop();
	~Queue();
};


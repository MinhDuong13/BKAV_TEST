#include "Queue.h"

//Khoi tao queue
Queue::Queue() {
	m_nFrontOfQueue = new int;
	m_nNumberOfQueue = 0;
	m_nBackOfQueue = new int;
}

//Khiem tra queue co rong hay khong
bool Queue::empty() {
	if (m_nNumberOfQueue == 0) {

		return true;
	}
	else {

		return false;
	}
}

//Khiem tra so phan tu trong queue
int Queue::size() {

	return m_nNumberOfQueue;
}

//Tra ve phan tu o dau ra
int Queue::front() {

	return *m_nFrontOfQueue;
}

//Tra ve phan tu o dau vao
int Queue::back() {

	return *(m_nBackOfQueue - 1);
}

//
void Queue::push(int m_nAddMember) {
	*m_nBackOfQueue = m_nAddMember;
	m_nBackOfQueue++;
	m_nNumberOfQueue++;
}

Queue::~Queue() {
}

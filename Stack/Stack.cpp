#include "Stack.h"

//Khoi tao stack
Stack::Stack() {

}

//Khiem tra stack co rong hay khong
bool Stack::empty() {
	if (m_nNumnerOfStack == 0) {

		return true;
	}
	else {

		return false;
	}
}

//Kiem tra so phan tu cua stack
int Stack::size() {

	return m_nNumnerOfStack;
}

//Tra ve phan tu nam o dinh cua stack
int Stack::top() {
	if (m_next == 'null') {

		return m_nMemberOfStack;
	}
}

//Them mot phan tu vao dinh stack
int Stack::push() {

}

//Lay di phan tu o dinh cua stack
int Stack::pop() {

}

Stack::~Stack() {

}

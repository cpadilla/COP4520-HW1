#include "stdafx.h"
#include "Stack.h"

Stack::Stack() {
	// new ReentrantLock()
	this->head = NULL;
}
Stack::~Stack() {

}

bool Stack::push(int x) {
	mtx.lock();
	Node *n = new Node(x, head);
	head = n;
	numOps++;
	mtx.unlock();
	return true;
}

int Stack::pop() {
	mtx.lock();
	if (head == NULL) {
		mtx.unlock();
		return NULL;
	}
	Node *n = head;
	head = n->next;
	numOps++;
	mtx.unlock();
	return n->value;
}

int Stack::getNumOps() {
	return numOps;
}
#pragma once

#include <string>
#include <mutex>
#include "Node.h"

using namespace std;

class Stack{
private:
	// lock
	mutex mtx;
	// Node
	Node* head;
	int numOps = 0;
public:
	Stack();
	~Stack();

	bool push(int x);
	int pop();
	int getNumOps();
};
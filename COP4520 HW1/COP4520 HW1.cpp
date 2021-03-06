// COP4520 HW1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "COP4520 HW1.h"

using namespace std;
using namespace chrono;

void foo() {
	this_thread::sleep_for(seconds(5));
	cout << "5 seconds passed!\n";
}

void bar() {
	this_thread::sleep_for(seconds(3));
	cout << "3 seconds passed!\n";
}

int main()
{
	thread a(foo);
	thread b(bar);

	a.join();
	b.join();

	this_thread::sleep_for(seconds(3));

    return 0;
}


#include <iostream>
#include <iomanip>
using namespace std;

class Stack {
	// e) copied code structure from lecture 03 20180112, page 28-29; won't work
	constexpr static int maximumSize{10};
	int elements[maximumSize]; //should the constexpr go here? it has to be defined to become a constexpr isnt it
	int topPoint;
public:
	// f) constructor
	Stack() : topPoint(-1) {};
	// g)
	void push(int);
	// h)
	void pop();
	// i)
	int top() const;
	// j)
	bool empty() const;
	// k)
	bool full() const;
	// l)
	void print() const;
};

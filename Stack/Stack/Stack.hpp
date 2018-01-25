#include <iostream>
#include <iomanip>
using namespace std;

class Stack {
	// e)
	int s[10]; //should the constexpr go here? it has to be defined to become a constexpr isnt it
	int t;
public:
	// f) constructor
	Stack() : t(-1) {};
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
#include <iostream>
#include <iomanip>
using namespace std;
// e)
constexpr int maximumSize{ 10 };

class Stack {
	// e) older commit uses this for Stack class
	//static constexpr int maximumSize{10};
	int elements[maximumSize];
	int topPoint;
public:
	// f) constructor
	Stack() : topPoint(-1) {};

	// g) takes an int and push into the stack
	// PRE: Stack not full
	// POST: Stack has one more element
	// no return 
	void push(int);

	// h) pops the Stack by one element
	// PRE: Stack not empty
	// POST: Stack has one less element
	// no return
	void pop();

	// i) returns the top position of the stack
	// PRE: Stack not empty
	// POST: Stack not changed
	// return the current top element's value
	int top() const;

	// j) checks if the stack is empty
	// PRE: None
	// POST: Stack not changed
	// returns boolean true when stack is empty, false when stack isn't
	bool empty() const;

	// k) checks if the stack is full
	// PRE: None
	// POST: Stack not changed
	// returns boolean true when stack is full, false when stack isn't
	bool full() const;

	// l) prints out the whole stack
	// PRE: None
	// POST: Stack not changed
	// no returns
	void print() const;
};

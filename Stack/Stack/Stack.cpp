#include "Stack.hpp"

// g) 
void Stack::push(int x) {
	if (!full()) {
		elements[topPoint + 1] = x;
		topPoint += 1;
	}
}
// h) 
void Stack::pop() {
	if (!empty()) {
		topPoint -= 1;
	}
};
// i) 
int Stack::top() const {
	if (topPoint > -1) {
		return elements[topPoint];
	}
	else {
		return -1;
	}
}
// j)
bool Stack::empty() const {
	if (topPoint == -1) {
		return true;
	}
	else {
		return false;
	}
};
// k)
bool Stack::full() const {
	if (topPoint == maximumSize-1) {
		return true;
	}
	else {
		return false;
	}
};
// l)
void Stack::print() const {
	cout << right;
	cout << "Stack from top at: " << topPoint << endl;
	cout << "pos   value" << endl;
	for (int i = topPoint; i > -1; --i) {
		cout <<"[" << i <<"]" << setw(6) << elements[i] << endl;
	}
};

Stack& Stack::operator=(Stack other) {
	Stack temp;
	// perform swap stack element
	while(!other.empty()) {
		temp.push(other.top());
		other.pop();
	}
	while (!temp.empty()) {
		this->push(temp.top());
		temp.pop();
	}
	return *this; // so, 'this' here is the left hand of the operator
};
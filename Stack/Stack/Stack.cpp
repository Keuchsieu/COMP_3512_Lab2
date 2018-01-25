#include "Stack.hpp"

// g)
void Stack::push(int x) {
	elements[topPoint + 1] = x;
	topPoint += 1;
}
// h)
void Stack::pop() {
	topPoint -= 1;
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
	if (topPoint != -1) {
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
	for (int i = topPoint; i > -1; --i) {
		cout <<"[" << i <<"]" << setw(6) << elements[i] << endl;
	}
};
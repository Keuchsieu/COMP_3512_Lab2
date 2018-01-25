#include "Stack.hpp"

// g)
void Stack::push(int x) {
	s[t + 1] = x;
	t += 1;
}
// h)
void Stack::pop() {
	t -= 1;
};
// i)
int Stack::top() const {
	if (t > -1) {
		return s[t];
	}
	else {
		return -1;
	}
}
// j)
bool Stack::empty() const {
	if (t == -1) {
		return true;
	}
	else {
		return false;
	}
};
// k)
bool Stack::full() const {
	if (t != -1) {
		return true;
	}
	else {
		return false;
	}
};
// l)
void Stack::print() const {
	cout << right;
	cout << "Stack from top at: " << t << endl;
	for (int i = t; i > -1; --i) {
		cout <<"[" << i <<"]" << setw(6) << s[i] << endl;
	}
};
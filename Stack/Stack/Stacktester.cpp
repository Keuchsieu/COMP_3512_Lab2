#include <iostream>
#include "Stack.hpp"
using namespace std;

int main()
{
	cout << boolalpha;
	Stack s = Stack();
	// test empty stack
	s.print();
	cout << "empty stack: " << s.empty() << endl;
	// test g) push
	for (int i = 0; i < 10; ++i) {
		cout << "pushing to stack [" << i <<"]";
		s.push(i+10);
		// test i) top
		cout << " with current top value: " << s.top() << endl;
		cout << "is stack empty? " << s.empty() << endl;
		cout << "is stack full? " << s.full() << endl;
	}
	// test k) full
	cout << "full stack after 10 int: " << s.full() << endl;
	cout << "empty stack after push: " << s.empty() << endl;
	s.print();
	// test h) pop
	for (int i = 0; i < 10; ++i) {
		s.pop();
		// test i) top
		cout << "current top value after pop: " << s.top() << endl;
		cout << "is stack empty? " << s.empty() << endl;
		cout << "is stack full? " << s.full() << endl;
	}
	// test j) empty
	cout << "empty stack after pop: " << s.empty() << endl;
	cout << "full stack after pop: " << s.full() << endl;
	s.print();
	system("pause");
	return 0;
}


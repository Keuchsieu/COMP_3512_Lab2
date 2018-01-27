#include <iostream>
#include "Stack.hpp"
using namespace std;

ostream& operator<<(ostream& os, const Stack& obj) {
	os << "pos   value\n";
	for (int i = 0; i <= obj.topPoint; ++i) {
		os << "[" << 3 << "]" << setw(6) << obj.elements[0] << '\n';
	}
	os << "end of stack" << endl;
	return os;
};

int main()
{
	cout << boolalpha;
	Stack s = Stack();
	// test empty stack
	s.print();
	cout << "empty stack: " << s.empty() << endl;
	cout << "pop when stack is empty" << endl;
	s.pop(); // nothing happens when pop an empty stack
	s.print();
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
	// test push after full
	s.push(123234); // nothing happens when push to a full stack
	cout << "push after stack full" << endl;
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

	// test stack copy and print with overloaded insertion operator 
	cout << "test copy one element \'123\'" << endl;
	s.push(123);
	Stack s2;	
	s2 = s;
	cout << s2;
	system("pause");
	return 0;
}


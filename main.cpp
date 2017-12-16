#include "Stack.h"

int main() {
	Stack<int> My_Stack = Stack<int>(4);
	
	My_Stack.push(3);
	My_Stack.push(7);
	My_Stack.dump();
	std::cout << My_Stack.pop() << std::endl;
	
	system("pause");
	return 0;
}
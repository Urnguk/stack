#pragma once
#include "node.h"

template <typename T>
class Stack {
public:
	Stack(T val = 0);
	~Stack();
	T pop();
	void push(T val);
	void dump();
private:
	Node<T>* top;
	int length;

};

template <typename T>
Stack<T>::Stack(T val) :
	length(1),
	top(new Node<T>(val))
{
	
}

template <typename T>
Stack<T>::~Stack()
{
	
	T trash;
	int l = length;
	for (int i = 0; i < l; i++) {
		trash = this->pop();
	}
}

template <typename T>
void Stack<T>::dump()
{
	std::cout << "||||||||||||||||||||||||" << std::endl;
	std::cout << "|||||||| stack |||||||||" << std::endl;
	std::cout << "|||||||| len = " << length << " ||||||||||" << std::endl;
	Node<T>* current = top;
	for (int i = 0; i < length; i++) {
		current->dump();
		current = current->get_prev();
	}
	std::cout << "||||||||||||||||||||||||" << std::endl << std::endl;
}

template <typename T>
void Stack<T>::push(T val)
{
	length += 1;
	Node<T>* tmp = top;
	top = new Node<T>(val, tmp);
}

template <typename T>
T Stack<T>::pop()
{
	T res = top->get_value();
	Node<T>* tmp = top;
	top = top->get_prev();
	delete[] tmp;
	length --;
	return res;
}


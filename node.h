#pragma once
#include <iostream>

template <typename T>
class Node {
public:
	Node(T, Node<T>* previous = NULL);
	~Node();
	void dump();
	T get_value();
	Node<T>* get_prev();
private:
	T value_;
	Node<T>* previous_;
};

template <typename T>
Node<T>::Node(T value, Node<T>* previous) :
	value_(value),
	previous_(previous)
{

}

template <typename T>
Node<T>::~Node()
{
	
}

template <typename T>
T Node<T>::get_value()
{
	return value_;
}

template <typename T>
Node<T>* Node<T>::get_prev()
{
	return previous_;
}

template <typename T>
void Node<T>::dump()
{
	std::cout << "||||||||||||||||NODE|||||||||||||||" << std::endl;
	std::cout << "          " << value_ << " - " << previous_ << std::endl;
	std::cout << "|||||||||||||||||||||||||||||||||||" << std::endl;
}


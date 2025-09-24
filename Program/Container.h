#pragma once
template <typename T>
class Container
{
private:
	int size;
	int index;

	T * list;

public:
	Container(unsigned int allocateSize); //unsigned : 음수가 되지 않도록 함

	void Push(T data);

	const int & Index();
	
	const T & operator [] (const int index);

	~Container();
};

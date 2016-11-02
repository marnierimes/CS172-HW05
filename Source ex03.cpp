//
//Marnie Rimes
//HW05 ex03 Liang 12.8 Implement vector class
//

#include<iostream>
using namespace std;

template<typename T>
class Vector
{
private:
	int size;
	int value;
public:
	//no-arg constructor
	Vector<T>() 
	{
		size = 0;
		value = 0;
	};
	//constructor with specified size and default values
	Vector<T>(int size) 
	{
		size = size;
		value = 0;
	};
	//constructor with specified size and values
	Vector<T>(int size, T defaultValue) 
	{
		size = size;
		value = defaultValue;
	};
	void push_back(T element) 
	{
		//adds the element to the end of the vector
		vector[size++] = element;
	};
	void pop_back() 
	{
		//clears the value of the last spot in the vector
		vector[size - 1] = NULL;
	};
	const unsigned size()
	{
		return size;
	};
	const T at(int index) 
	{
		//returns the value at the certain index in the vector
		return vector[index];
	};
	bool const empty() 
	{
		//returns true if there isn't anything in the vector
		if (size == 0)
			return true;
		else
			return false;
	};
	void clear() 
	{
		//clears values of entire vector
		for (int i = 0; i < capacity; i++)
		{
			vector[i] = NULL;
		}
	};
	void swap(vector<T> v2) 
	{
		//switches the values of the two vectors
		vector<T> temp = vector<T> v2;
		vector<T> v2 = vector<T> v;
		vector<T> v = vector<T> v2;
	};

};

int main()
{
	return 0;
}
//
//Marnie Rimes
//HW05 ex01 Liang 12.2: Linear search
//

#include<iostream>
#include<string>
using namespace std;

//creates generic template
template<typename T>
//T depends on the parameter type when the function is called
int linearSearch(const T list[], T key, int arraySize)
{
	//checks if the key given in the parameter equals a value in the array
	for (int i = 0; i < arraySize; i++)
	{
		//returns the position of the value in the array
		if (key == list[i])
		{
			return i;
		}
	}
	//returns -1 if key is not in the array
	return -1;
}

int main()
{
	//list with integer values
	int list[] = { 1, 4, 4, 2, 5, -3, 6, 2 };
	//calls the function and uses integer parameters
	cout << linearSearch(list, 4, 8) << endl;
	
	//list with double values
	double list2[] = { 3.2, 5.9, 7, 28.4, 1.3, 10 };
	//calls the function with double parameters
	cout << linearSearch(list2, 1.3, 6) << endl;
	
	//list with strings
	string list3[] = { "This", "is", "a", "test" };
	//calls the function with string parameters
	cout << linearSearch(list3, string("Marnie"), 4) << endl;

	return 0;
}
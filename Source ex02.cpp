//
//Marnie Rimes
//HW05 ex02 12.4: Is sorted?
//

#include<iostream>
#include<string>
using namespace std;

//function for sorting arrays
template<typename T>
void sort(T list[], int listSize)
{
	for (int i = 0; i < listSize; i++)
	{
		//loops to find the smallest values and sort the array
		int smallestIndex = i;
		for (int j = i + 1; j < listSize; j++)
		{
			if (list[j] < list[smallestIndex])
			{
				smallestIndex = j;
			}
		}
		if (smallestIndex != i)
		{
			Swap(list[i], list[smallestIndex)
		}
	}
}

//generic function that depends on the parameters
template<typename T>
bool isSorted(const T list[], int size)
{
	//creates a sorted array
	T sortedList = sort(list, size);
	//compares the sorted array to the array given in the parameters
	if (list = sortedList)
		//if the arrays match returns true
		//that the array in the parameter is sorted
		return true;
	else
		//if the given parameter is not sorted, returns false
		return false;
}

int main()
{
	//array with integer values
	int list[] = { 1, 2, 3, 4, 5 };
	//calls function to see if list is sorted
	cout << isSorted(list, 5) << endl;
	
	//array with double values
	double list2[] = { 3.5, 2.9, 6, 3.7, 4.4 };
	//calls function to see if the double values are sorted in the array
	cout << isSorted(list2, 5) << endl;

	//array of strings
	string list3[] = { "Are", "These", "Strings", "All", "Sorted" };
	//calls function to see if the array of strings is sorted
	cout << isSorted(list3, 5) << endl;

	return 0;
}
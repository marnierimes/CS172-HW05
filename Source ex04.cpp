//
//Marnie Rimes
//HW05 ex04 Liang 12.20 shuffle vector
//

#include<iostream>
#include<vector>
#include<ctime>
using namespace std;

//creates generic template for the shuffle function  
template<typename T>
void shuffle(vector<T>& v)
{
	//creates a random generator
	srand(time(0));
	for (int i = 0; i < v.size(); i++)
	{
		//randomizes an index
		int index = rand() % v.size();
		//uses a temp data field to switch the original value
		//with the randomized one
		int temp = v[i];
		//sets the old value to the new random one
		v[i] = v[index];
		v[index] = temp;
	}

}

int main()
{
	//created vector v
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		//putting values 1-10 into the vector
		v.push_back(i + 1);
	}
	//calling the shuffle fuction to shuffle the contents of the vector
	shuffle(v);

	//outputs the new shuffled members of the vector
	cout << "Shuffled numbers in the vector: ";
	for (int i = 0; i < v.size; i++)
	{
		cout << v.at(i) << " ";
	}

	return 0;
}
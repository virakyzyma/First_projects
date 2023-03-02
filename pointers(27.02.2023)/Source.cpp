#include <iostream>

using namespace std;


void upFunction()
{
	int counter = 0;
	counter++;
}


int main()
{
	//АРИФМЕТИКА УКАЗАТЕЛЕЙ

	int* arr = new int[5] {-2, 3, 5, 2, 6};

	cout << *(arr + 3); //указатель + int



	//оператор расштрения области видимости   :: 

	int n = 30;

	//cout << ::n << endl;

	for (int i = 0; i < 5; i++)
	{
		int n = 30;

		upFunction();
	}
	//
















	return 0;
}
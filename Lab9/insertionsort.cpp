#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
}
int main()
{
	int maxsize = 5;
	int array[maxsize];
	cout << "Enter the elements of the array:" << endl;
	for (int i = 0; i < maxsize; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> array[i];
	}
	insertionSort(array, maxsize);
	return 0;
}
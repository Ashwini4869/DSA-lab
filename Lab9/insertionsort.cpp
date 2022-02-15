#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int temp = arr[i];
		int j = i - 1;
		for (j = i - 1; j >= 0 && arr[j] > temp; j--)
		{
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = temp;
	}
	cout << "The sorted array is:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
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
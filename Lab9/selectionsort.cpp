#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void selectionSort(int arr[], int n)
{
	int i, j;
	int maxpos;
	for (i = n - 1; i > 0; i--)
	{
		maxpos = 0;
		for (j = 1; j <= i; j++)
		{
			if (arr[j] > arr[maxpos])
			{
				maxpos = j;
			}
			if (maxpos != i)
			{
				swap(&arr[maxpos], &arr[i]);
			}
		}
	}
	cout << "The sorted array is:";
	for (i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}
int main()
{
	int maxsize = 5;
	int array[maxsize];
	cout << "Enter the elements of array:" << endl;
	for (int i = 0; i < maxsize; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> array[i];
	}
	selectionSort(array, maxsize);
	return 0;
}
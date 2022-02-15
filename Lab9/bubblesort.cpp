#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void bubblesort(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
	cout << "The sorted array is:";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}
int main()
{
	int maxsize = 5;
	int a[maxsize];
	cout << "Enter the value of elements: " << endl;
	for (int i = 0; i < maxsize; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	bubblesort(a, maxsize);
	return 0;
}
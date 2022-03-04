// unidentified error during sorting
#include <iostream>
using namespace std;
int shellSort(int arr[], int n)
{
	for (int gap = n / 2; gap > 0; gap /= 2)
	{
		for (int i = gap; i < n; i++)
		{
			int temp = arr[i];
			int j;
			for (j = 1; (j >= gap && arr[j - gap]) > temp; j -= gap)
			{
				arr[j] = arr[j - gap];
			}
			arr[j] = temp;
		}
	}
	return 0;
}
void displayArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
int main()
{
	int arr[] = {3, 5, 2, 1}, i;
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Array: \n";
	displayArray(arr, n);
	shellSort(arr, n);
	cout << "Sorted Array: \n";
	displayArray(arr, n);
	return 0;
}
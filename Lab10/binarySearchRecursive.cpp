#include <iostream>
using namespace std;
int binarySearch(int arr[], int l, int r, int key)
{
	if (r >= 1)
	{
		int mid = l + (r - 1) / 2;

		if (arr[mid] == key)
		{
			return mid;
		}

		if (arr[mid] > key)
		{
			return binarySearch(arr, l, mid - 1, key);
		}
		else
		{
			return binarySearch(arr, mid + 1, r, key);
		}
	}
	return -1;
}
int main()
{
	int arr[] = {10, 22, 24, 25, 37};
	int key = 24;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, key);
	if (result == -1)
	{
		cout << "Element not found!" << endl;
	}
	else
	{
		cout << "Found element at index " << result;
	}
	return 0;
}
#include <iostream>
using namespace std;
int binarySearch(int arr[], int l, int r, int key)
{
	while (l <= r)
	{
		int m = l + (r - 1) / 2;

		if (arr[m] == key)
		{
			return m;
		}
		if (arr[m] < key)
		{
			l = m + 1;
		}
		else
		{
			r = m - 1;
		}
	}
	return -1;
}
int main()
{
	int arr[] = {2, 3, 4, 6, 7};
	int key = 4;
	int n = sizeof(arr) / sizeof(arr[0]); // size of the array
	int result = binarySearch(arr, 0, n - 1, key);
	if (result == -1)
	{
		cout << "Element not found!" << endl;
	}
	else
	{
		cout << "Found element at index " << result << endl;
	}
	return 0;
}
#include <iostream>
using namespace std;
// global variables
int a[100], n; // array of maxsize 100 and n is actual size to be taken from user
void interchange(int f, int s)
{
	int temp;
	temp = a[f];
	a[f] = a[s];
	a[s] = temp;
}
void quickSort(int first, int last)
{
	int i, j, k;
	if (first < last)
	{
		i = first;
		j = last;
		k = a[first];
		do
		{
			while ((a[i] <= k) && (i < last))
			{
				i++;
			}
			while ((a[j] > k) && (j > first))
			{
				j--;
			}
			if (i < j)
			{
				interchange(i, j);
			}
			else
			{
				break;
			}
		} while (first < last);
		interchange(first, j);
		quickSort(first, j - 1);
		quickSort(j + 1, last);
	}
}
int main()
{
	int i;
	cout << "Quick Sort\n";
	cout << "Enter the size of the array:";
	cin >> n;
	cout << "Enter the elements:\n";
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	quickSort(0, n - 1);
	cout << "The sorted elements are:\n";
	for (i = 0; i < n; i++)
	{
		cout << "\t" << a[i];
	}
	return 0;
}
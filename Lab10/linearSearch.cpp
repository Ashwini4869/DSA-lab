#include <iostream>
using namespace std;
void search(int arr[], int n, int key)
{
	int pos = 0;
	bool found = false;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == key)
		{
			found = true;
			cout << "Found " << key << " at position " << pos;
		}
		pos++;
	}
	if (found == false)
	{
		cout << "Not found" << endl;
	}
}
int main()
{
	int key;
	int a[] = {5, 10, 14, 15, 17};
	int n = sizeof(a) / sizeof(a[0]);
	cout << "Enter the element you want to search:";
	cin >> key;
	search(a, n, key);
	return 0;
}
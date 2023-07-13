// C++ program to find a pair with the given difference
#include <iostream>
#include<algorithm>

using namespace std;

// The function assumes that the array is sorted
bool findPair(int arr[], int size, int n)
{
     sort(arr, arr + size);
	// Initialize positions of two elements
	int i = 0;
	int j = 1;

	// Search for a pair
	while (i < size && j < size)
	{
		if (i != j && (arr[j] - arr[i] == n || arr[i] - arr[j] == n) )
		{
			cout << "Pair Found: (" << arr[i] <<
						", " << arr[j] << ")";
			return true;
		}
		else if (arr[j]-arr[i] < n)//2,3,5,20,50,80 2 
			j++;
		else
			i++;
	}

	cout << "No such pair";
	return false;
}

// Driver program to test above function
int main()
{
	int arr[] = {5, 20, 3, 2, 50, 80};
	int size = sizeof(arr)/sizeof(arr[0]);
	int n = 2;
	findPair(arr, size, n);
	return 0;
}
#include <iostream>
using namespace std; 

int binarySearch(int array[], int left, int right, int x) 
{ 
	if (right >= left) { 
		int mid = left + (right - left) / 2; 

		// If the element is present at the middle 
		// itself 
		if (array[mid] == x) 
			return mid; 

		// If element is smaller than mid, then 
		// it can only be present in left subarray 
		if (array[mid] > x) 
			return binarySearch(array, left, mid - 1, x); 

		// Else the element can only be present 
		// in right subarray 
		return binarySearch(array, mid + 1, right, x); 
	} 

	// We reach here when element is not 
	// present in array 
	return -1; 
} 

int main(void) 
{ 
	int array[] = { 2, 3, 4, 10, 40 }; 
	int x; 
    cout << "Enter number for a search: ";
    cin >> x;
	int length = sizeof(array) / sizeof(array[0]); 
	int result = binarySearch(array, 0, length - 1, x); 
	(result == -1) ? cout << "Element is not present in array"
				: cout << "Element is present at index " << result; 
	return 0; 
} 

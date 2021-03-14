#include <iostream>
using namespace std;

void insertionSort(int array[], int length) 
{ 
	int i, x, j; 
	for (i = 1; i < length; i++)
	{  
		x = array[i]; 
		j = i - 1;

		while (j >= 0 && array[j] > x)
		{ 
			array[j + 1] = array[j]; 
			j = j - 1; 
		} 
		array[j + 1] = x;
	} 
    cout << "Sorted array:" << "\n";
    
    // loop through the elements of the array
    for (int i = 0; i < length; i++) {
        cout << "[" << i << "]: " << array[i] << "\n";
    }
} 

int main() 
{ 
	int array[] = { 12, 11, 13, 5, 6 }; 
	int length = sizeof(array) / sizeof(array[0]); 

	insertionSort(array, length);
} 

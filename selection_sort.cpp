#include <iostream>
using namespace std;

void selectionSort(int array[], int length) 
{ 
	int i, j, min; 

	for (i = 0; i < length-1; i++) 
	{ 
		// Find the minimum element in unsorted array 
		min = i; 
		for (j = i+1; j < length; j++) 
		if (array[j] < array[min]){
			min = j; 
        }

        int temp = array[min]; 
	    array[min] = array[i]; 
	    array[i] = temp;  
	} 
    cout << "Sorted array:" << "\n";
    
    // loop through the elements of the array
    for (int i = 0; i < length; i++) {
        cout << "[" << i << "]: " << array[i] << "\n";
    }
} 

int main() 
{ 
	int array[] = {64, 25, 12, 22, 11}; 
	int length = sizeof(array)/sizeof(array[0]); 
	selectionSort(array, length);
	return 0; 
}

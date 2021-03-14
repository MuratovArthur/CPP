#include <iostream> 
using namespace std; 
  
// Function to insert x in array at position index 
int* insertX(int length, int array[], 
             int x, int index) 
{ 
    // increase the size by 1 
    length++; 
  
    // shift elements forward 
    for (int i = length; i >= index; i--){ 
        array[i] = array[i - 1]; 
    }
  
    // insert x at pos 
    array[index] = x; 
  
    return array;
} 
  
// Driver Code 
int main() 
{ 
    // declaring array size
    int length;
    cout << "Enter the length: ";
    cin >> length;
    
    // declaring empty array
    int array[length];
  
    // loop through the elements of the array
    for(int i=0; i < length; i++){
        cout << "Value for[" << i << "]: ";
        cin >> array[i];
    }

    cout << "Your array: " << "\n";
    
    // loop through the elements of the array
    for (int i = 0; i < length; i++) {    
        cout << "[" << i << "]: " << array[i] << "\n";
    }
  
    // input of element's index
    int index;
    cout << "Enter the index of inserted element: ";
    cin >> index;

    // input of element
    int x;
    cout << "Enter the element: ";
    cin >> x; 
  
    // calling function
    insertX(length, array, x, index);
  
    // print the updated array 
    cout << "Your new array:" << "\n";
    
    // loop through the elements of new array
    for (int i = 0; i < length+1; i++) {    
        cout << "[" << i << "]: " << array[i] << "\n";
    }
} 
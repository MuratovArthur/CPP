#include <iostream> 
using namespace std; 
  
// Function to insert x in array at position index 
int deleteX(int length, int array[], 
             int x, int index) 
{
    for(int i = 0; i < length; i++){
        if(array[i] == x){
            index = i;
        }
    }
    if(index >= 0){
            // shift elements back 
            for (int i = index; i < length; i++){ 
                array[i] = array[i+1]; 
            }

            length--;

            // print the updated array 
            cout << "Your new array:" << "\n";
    
             // loop through the elements of new array
            for (int i = 0; i < length; i++) {    
                cout << "[" << i << "]: " << array[i] << "\n";
            }
    } else {
        cout << "Element not found";
    }
    return 0;
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

    // input of deleting element
    int x;
    cout << "Enter the element to delete: ";
    cin >> x; 
  
    // calling function
    deleteX(length, array, x, 0);
} 
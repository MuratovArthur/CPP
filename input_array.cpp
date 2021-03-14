#include <iostream>
using namespace std;

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

    cout << "Your array:" << "\n";
    
    // loop through the elements of the array
    for (int i = 0; i < length; i++) {    
        cout << "[" << i << "]: " << array[i] << "\n";
    }
}
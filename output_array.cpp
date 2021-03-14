#include <iostream>
using namespace std;

int main()
{
    // declaring array
    int array[] = { 1, 2, 3, 4, 5 };

    // declaring array size
    int length = sizeof(array)/sizeof(array[0]);
 
    cout << "Your array:" << "\n";
    
    // loop through the elements of the array
    for (int i = 0; i < length; i++) {
        cout << "[" << i << "]: " << array[i] << "\n";
    }
 
    return 0;
}
#include <iostream>
using namespace std;

int search(int array[], int length, int x)
{
	for (int i = 0; i < length; i++){
		if (array[i] == x){
			return i;
        }
    }
	return -1;
}

int main(void)
{
	int array[] = {2, 3, 4, 10, 40};
	int x;
    cout << "Enter a number for a search: ";
    cin >> x;
	int length = sizeof(array) / sizeof(array[0]);

	int result = search(array, length, x);
	if(result == -1){
        cout << "Element is not present in array";
    } else {
        cout << "Element is present at index " << result;
    }
	return 0;
}

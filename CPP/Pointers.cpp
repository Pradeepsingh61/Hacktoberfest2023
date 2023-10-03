// CPP program to demonstrate the incrementy and decrement
// of a pointer
#include <iostream>
using namespace std;

int main()
{

	int num = 27;
	// Storing address of num in num_pointer
	int* num_pointer = #

	// Print size of int
	cout << "Size of int: " << sizeof(int) << endl;

	// Print the address stored at num_pointer
	cout << "Before Increment: " << num_pointer << endl;
	// Increment pointer
	num_pointer++;

	cout << "After Increment: " << num_pointer << endl;

	// Print the address stored at num_pointer
	cout << "Before Decrement: " << num_pointer << endl;
	// Decrement pointer
	num_pointer--;

	cout << "After Decrement: " << num_pointer << endl;

	return 0;
}

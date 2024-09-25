#include <iostream>
using namespace std;


int* arrayExpander(int arr[], int size) {
	int newSize = size * 2;
	int* newArr = new int[newSize];

	// Copying first half with original array and second half with 22
	for (int i = 0; i < newSize; i++) {
		(i < size) ? (newArr[i] = arr[i]) : (newArr[i] = 22);
	}

	return newArr;  // Returning pointer to the new array
}

int main() {
	// Taking number of elements
	int numElements;
	do {
		cout << "Please enter a positive number of elements: ";
		cin >> numElements;

		if (numElements <= 0) {
			cout << "Invalid number of elements!!" << endl;
		}
	} while (numElements <= 0);


	// Dynamically allocating memory to numArr
	int* numArr = new int[numElements];

	// Prompting user to enter values in the array
	for (int i = 0; i < numElements; i++) {
		cout << "Enter value " << i + 1 << ": ";
		cin >> numArr[i];
	}

	// Calling function into a pointer to newArr
	int* newArr = arrayExpander(numArr, numElements);

	// Error Handling
	if (newArr == nullptr) {
		cout << "Memory allocation failed!" << endl;
		delete[] numArr;
		return 1;
	}

	// Printing array
	cout << "\n\nNew values: ";
	for (int i = 0; i < numElements * 2; i++) {
		cout << newArr[i] << " ";
	}

	// Freeing up memory
	delete[] numArr;
	delete[] newArr;

	return 0;
}
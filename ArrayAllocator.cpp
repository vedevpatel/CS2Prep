#include <iostream>
using namespace std;


int* arrayAllocator(int numElements) {
	int* newArr = nullptr;
	newArr = new int[numElements];

	return newArr;
}

int main() {
	int numElements;
	cout << "Enter the number of elements: ";
	cin >> numElements;

	int* ptr = arrayAllocator(numElements);

	// Sample values (multiples of 10)
	for (int i = 0; i < numElements; i++) {
		ptr[i] = i * 10;
	}
	
	for (int i = 0; i < numElements; i++) {
		cout << ptr[i] << " ";
	}

	delete[] ptr;

	return 0;
}
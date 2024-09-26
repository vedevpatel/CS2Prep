#include <iostream> 
using namespace std;


int findMode(int arr[], int size) {
	int* ptr = arr;
	int maxCount = 0, modeElement = *ptr;

	for (int i = 0; i < size; i++) {
		int count = 0;

		for (int j = 0; j < size; j++) {
			if (*(ptr + j) == *(ptr + i)) {
				count++;
			}
		}

		if (count > maxCount) {
			maxCount = count;
			modeElement = *(ptr + i);
		}
	}
	return (maxCount == 1) ? -1 : modeElement;
}


int main() {
	int numElements;
	cout << "Enter the number of elements: ";
	cin >> numElements;

	int* nums = new int[numElements];

	for (int i = 0; i < numElements; i++) {
		cout << "Enter value " << i + 1 << ": ";
		cin >> *(nums + i);
	}

	int mode = findMode(nums, numElements);
	
	if (mode == -1) {
		cout << "Mode not found." << endl;
	}
	else {
		cout << "Mode = " << mode << endl;
	}


	delete[] nums;

	return 0;
}


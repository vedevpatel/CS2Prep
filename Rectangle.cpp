// This program demonstrates the use of pointer variables
// It finds the area of a rectangle given length and width
// It prints the length and width in ascending order
// PLACE YOUR NAME HERE
#include <iostream>
using namespace std;
int main()
{
	int length, width, area;

	int* lengthPtr = nullptr; // int pointer which will be set to point to length int
	int* widthPtr = nullptr; // int pointer which will be set to point to width

	cout << "Please input the length of the rectangle" << endl;
	cin >> length;
	cout << "Please input the width of the rectangle" << endl;
	cin >> width;

	// Fill in code to make lengthPtr point to length (hold its address)
	lengthPtr = &length;
	widthPtr = &width;
	// Fill in code to make widthPtr point to width (hold its address)
	area = *lengthPtr * *widthPtr;
		
		
	cout << "The area is " << area << endl;

	if (*lengthPtr > *widthPtr)
		cout << "The length is greater than the width" << endl;
	else if (*widthPtr > *lengthPtr)
		cout << "The width is greater than the length" << endl;
	else
		cout << "The width and length are the same" << endl;

	return 0;
}

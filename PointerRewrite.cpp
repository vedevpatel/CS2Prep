#include <iostream> 
using namespace std;


int doSomething(int* x, int* y)
{
	int temp = *x;
	*x = *y * 10;
	*y = temp * 10;
	return *x + *y;
}


int main() {
	int x, y;
	
	int* xptr = &x;
	int* yptr = &y;

	cout << "Enter two numbers: ";
	cin >> *xptr >> *yptr;

	int result = doSomething(xptr, yptr);
	cout << result;

	return 0;
}
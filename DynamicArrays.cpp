#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float* monthSales = nullptr;
	float total = 0, average = 0;
	int numOfSales; 

	cout << fixed << showpoint << setprecision(2);
	cout << "How many monthly sales will be processed? "; 
	cin >> numOfSales;
	// Fill in the code to allocate memory for the array pointed to by monthSales.
	monthSales = new float[numOfSales];

	// Fill in the condition to determine if memory has been allocated 
	if (monthSales == nullptr){
		cout << "Error allocating memory!\n";
		return 1;
	}

	cout << "Enter the sales below\n";
	for (int count = 0; count < numOfSales; count++) {
		cout << "Sales for Month number " << count + 1 << ": ";

		// Fill in code to bring sales into an element of the array
		cin >> monthSales[count];
	}

	for (int count = 0; count < numOfSales; count++) {
		total += monthSales[count];
	}
	average = total / numOfSales;
	cout << "Average Monthly sale is $" << average << endl;

	// Fill in the code to deallocate memory assigned to the array.
	delete[] monthSales;
	return 0;

}
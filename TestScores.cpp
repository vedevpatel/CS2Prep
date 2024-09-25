// Test Scores
// This program sorts an array of test scores, and
// prints both the sorted array and the average score.
#include <iostream>
#include <algorithm> // Needed for sort algorithm
using namespace std;
double average(double [], int );
int main()
{
	int numberOfScores;
	double* testScore; // Pointer to dynamically allocated array of scores
	double ave; // Average score
	// Determine number of scores and allocate array
	cout << "Enter number of Scores: ";
	cin >> numberOfScores;
	testScore = new double[numberOfScores];
	// Get scores from the user
	cout << "Enter the " << numberOfScores << " scores separated by spaces:\n";
	double* p = testScore; // Pointer to next value to be read
	for (int k = 0; k < numberOfScores; k++)
	{
		cin >> *p;
		// Input validation
		if (*p < 0)
		{
			cout << "You may not use negative scores. Please restart the program.";
			exit(0);
		}
		p++;
	}
	// Echo scores back to user
	cout << "Scores entered:\n";
	p = testScore;
	for (int j = 0; j < numberOfScores; j++)
	{
		cout << *p << " "; p++;
	}
	// Sort scores using algorithm sort library function
	sort(testScore, testScore + numberOfScores);
	// Compute average
	ave = average(testScore, numberOfScores);
	// Print the output
	cout << "\nThe list of sorted scores is:\n";
	p = testScore;
	for (int m = 0; m < numberOfScores; m++)
	{
		cout << *p << " "; p++;
	}
	cout << "\nThe average is: " << ave;
	return 0;

}


double average(double scores[], int size) {
	double total = 0;

	for (int i = 0; i < size; i++) {
		total += scores[i];
	}

	return total / size;
}


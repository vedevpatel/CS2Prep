// Lottery Winners
// use a binary search
// to see if an entered winning 5-digit lottery number matches the number
// on any of the player's tickets.
#include <iostream>
using namespace std;
bool searchList(const long[], int, long); // Function prototype
const int SIZE = 10;
int main()
{
	long ticket[SIZE] = { 13579, 26791, 26792, 33445, 55555,
	62483, 77777, 79422, 85647, 93121 };
	long winningNum;
	cout << "Please enter this week's 5-digit winning lottery number: ";
	cin >> winningNum;
	// If searchList returns Boolean true, player has a winning ticket.
	// If searchList returns false, the ticket is not a winner.
	if (searchList(ticket, SIZE, winningNum))
		cout << "You have a winning ticket.\n";
	else
		cout << "You did not win this week." << endl;
	return 0;
}


bool searchList(const long arr[], int size, long target) {
	bool found = false;

	int low = 0, high = size - 1;

	while (low <= high && !found) {

		int mid = low + (high - low) / 2;

		if (arr[mid] == target) {
			found = true;
		}

		else if (arr[mid] < target) {
			low = mid + 1;
		}

		else if (arr[mid] > target) {
			high = mid - 1;
		}
	}

	return found;
}


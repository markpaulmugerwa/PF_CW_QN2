#include <iostream>

using namespace std;

                                        // Function to print the divisors of a number in decreasing order
double printDivisors(int number) {
    cout << "\nDivisors of " << number << " in decreasing order:\n";

                                        // Starting from the number itself and go to 1
    for (int i = number; i >= 1; i--) {
        if (number % i == 0) {
            cout << i << endl;
        }
    }

    return static_cast<double>(number); // Returns the largest divisor, which is the number itself
}

int main() {
    int input = 0;                      // This variable stores the user input
    char response = 'Y';                // This variable stores user's decision to continue or not

    cout << "Welcome! This program will display the divisors of any positive integer you enter.\n";

                                        // The loop allows the user to repeat the process
    while (response == 'Y' || response == 'y') {
        cout << "\nPlease enter a positive integer: ";
        cin >> input;

                                        // Validate the input to ensure it's a positive integer
        while (input <= 0) {
            cout << input << " is not a positive integer.\nPlease try again: ";
            cin >> input;
        }

                                        // Call the function to print divisors and get the largest divisor
        double largestDivisor = printDivisors(input);
        cout << "The largest divisor is: " << largestDivisor << endl;

                                        // Ask the user if they want to check another integer
        cout << "\nWould you like to check another integer (Y/N)? ";
        cin >> response;

                                        // Validate the user's response
        while (response != 'Y' && response != 'y' && response != 'N' && response != 'n') {
            cout << "Please respond with Y (or y) for yes and N (or n) for no: ";
            cin >> response;
        }
    }

    cout << "\nGoodbye!\n";
    return 0;
}

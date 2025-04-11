#include <iostream>
#include <chrono>
#include <vector>
#include <algorithm>

using namespace std;

int isPrime(int number) {
    if (number <= 1) {
        cout << number << " is not a prime number" << endl;
        return 0;
    }
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            cout << number << " is not a prime number" << endl;
            return 0;
        }
    }
    cout << number << " is a prime number" << endl;
    return 1;
}

int countUniqueDigitNumbers() {
    int counter = 0;
    int unitsDigit, tensDigit, hundredsDigit, thousandsDigit;
    for (int i = 1000; i <= 9999; i++) {
        unitsDigit = i % 10;
        tensDigit = (i / 10) % 10;
        hundredsDigit = (i / 100) % 10;
        thousandsDigit = i / 1000;

        if (unitsDigit != tensDigit && unitsDigit != hundredsDigit && unitsDigit != thousandsDigit &&
            tensDigit != hundredsDigit && tensDigit != thousandsDigit && hundredsDigit != thousandsDigit) {
            counter++;
        }
    }
    return counter;
}

int printDivisorsInRange() {
    for (int i = 20; i <= 40; i++) {
        cout << "Divisors of " << i << ": ";
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                cout << j << ", ";
            }
        }
        cout << endl;
    }
    return 0; // Return 0 as the function completes successfully
}

int main() {

    // int number;
    // cout << "Enter a number: ";
    // cin >> number;

    // auto start = chrono::high_resolution_clock::now(); // Start time
    // isPrime(number);
    // auto end = chrono::high_resolution_clock::now(); // End time

    // chrono::duration<double> elapsed = end - start; // Elapsed time
    // cout << "Execution time: " << elapsed.count() << " seconds" << endl;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // cout << "Between 1000 and 9999, there are " << countUniqueDigitNumbers() << " numbers with all unique digits.";

    printDivisorsInRange();
    return 0;
}
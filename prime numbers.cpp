#include <iostream>
using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    if (number <= 3) {
        return true;
    }
    if (number % 2 == 0 || number % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}


void findPrimesInRange(int start, int end) {
    cout << "Prime numbers in the range " << start << " to " << end << " are:" << endl;
    for (int i = start; i <= end; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int choice;
    while (true) {
        cout << "Choose an option:" << endl;
        cout << "1. Find prime numbers in a range" << endl;
        cout << "2. Check if a specific number is prime" << endl;
        cout << "3. Exit" << endl;
        cin >> choice;

        if (choice == 1) {
            int start, end;
            cout << "Enter the starting and ending range: ";
            cin >> start >> end;
            findPrimesInRange(start, end);
        }
        else if (choice == 2) {
            int number;
            cout << "Enter a number to check for primality: ";
            cin >> number;
            if (isPrime(number)) {
                cout << number << " is prime." << endl;
            }
            else {
                cout << number << " is not prime." << endl;
            }
        }
        else if (choice == 3) {
            break;
        }
        else {
            cout << "Invalid option. Please choose again." << endl;
        }
    }

    return 0;
}
#include <iostream>

using namespace std;


bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}


int factorial(int num) {
    int result = 1;
    for (int i = 2; i <= num; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n)) {
        cout << "Factorial of " << n << " is: " << factorial(n) << endl;
    } else {
        cout << "Error: not a  prime number ." << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

int main() {
    const int SIZE = 7;
    int arr[SIZE];

    // Taking elements of the array from the user
    cout << "Enter " << SIZE << " integers for the array:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Taking the number to search from the user
    int searchNumber;
    cout << "Input a number to search: ";
    cin >> searchNumber;

    // Counting occurrences of the number
    int count = 0;
    for (int i = 0; i < SIZE; ++i) {
        if (arr[i] == searchNumber) {
            count++;
        }
    }

    // Printing the result
    cout << "The number occurs " << count << " times in the array" << endl;

    return 0;
}

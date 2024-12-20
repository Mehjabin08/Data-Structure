#include <iostream>

using namespace std;

int main() {
    const int SIZE = 12;
    int arr[SIZE];
    int frequencies[SIZE] = {0}; // Initialize all frequencies to 0

    // Taking elements of the array from the user
    cout << "Enter " << SIZE << " integers for the array:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> arr[i];
    }

    // Counting occurrences of each element
    for (int i = 0; i < SIZE; ++i) {
        int currentElement = arr[i];
        frequencies[currentElement]++;
    }

    // Printing the frequency of each element
    cout << "Output:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        if (frequencies[i] != 0) {
            cout << i << " occurs = " << frequencies[i] << " times" << endl;
        }
    }

    return 0;
}

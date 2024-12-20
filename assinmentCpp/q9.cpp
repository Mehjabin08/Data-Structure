#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int SIZE1 = 7; // Change these sizes according to your requirement
    const int SIZE2 = 5;
    int arr1[SIZE1] = {5, 7, 10, 15, 20, 25, 30}; // Example arrays
    int arr2[SIZE2] = {3, 8, 12, 18, 22};
    vector<int> evenElements;

    // Merging two arrays and extracting even elements
    for (int i = 0; i < SIZE1; ++i) {
        if (arr1[i] % 2 == 0) {
            evenElements.push_back(arr1[i]);
        }
    }
    for (int i = 0; i < SIZE2; ++i) {
        if (arr2[i] % 2 == 0) {
            evenElements.push_back(arr2[i]);
        }
    }

    // Printing the new array containing even elements
    cout << "New array with even elements:" << endl;
    for (int i = 0; i < evenElements.size(); ++i) {
        cout << evenElements[i] << " ";
    }
    cout << endl;

    return 0;
}

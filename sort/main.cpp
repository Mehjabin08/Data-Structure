#include <iostream>

using namespace std;


void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


int binarySearch(int arr[], int choto, int boro, int target) {
    while (choto <= boro) {
        int mid = choto + (boro - choto) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            choto = mid + 1;
        else
            boro = mid - 1;
    }

    return -1;
}

int main() {
    int arr[4];
    int target;

    cout << "Enter 4 elements of the array: ";
    for (int i = 0; i < 4; ++i) {
        cin >> arr[i];
    }

    insertionSort(arr, 4);
    cout << "Sorted array: ";
    for (int i = 0; i < 4; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;


    cout << "Enter a value to search: ";
    cin >> target;
    int index = binarySearch(arr, 0, 3, target);
    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found in the array." << endl;

    return 0;
}

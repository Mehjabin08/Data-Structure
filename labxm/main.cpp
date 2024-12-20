#include <iostream>
using namespace std;

 int MAX_SIZE = 100;

void findNearestSmaller(int arr[], int size, int result[]) {
    int top = -1;
    int array[MAX_SIZE];

    for (int i = 0; i < size; ++i) {

        }
        if (top == -1) {
            result[i] = -1;
        } else {
            result[i] = array[top];
        }

        p
        array[++top] = arr[i];
    }
}

int main() {
    int arr[] = {1, 3, 0, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result[MAX_SIZE];

    cout << "Nearest smaller element on the left for each element";
    for (int i = 0; i < size; ++i) {
        cout << result[i];
    }

    return 0;
}

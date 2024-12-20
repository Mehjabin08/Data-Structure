#include <iostream>
using namespace std;

int main() {
    int A[5][5];
    int B[5][6];
    int F[5][6];

    cout << "Input the elements of matrix A:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Input the elements of matrix B:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> B[i][j];
        }
    }

 
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 6; ++j) {
            F[i][j] = 0;
            for (int k = 0; k < 5; ++k) {
                F[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Displaying the product matrix F
    cout << "Product matrix F:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            cout << " " << F[i][j];
        }
        cout << endl;
    }

    
    int transposeF[6][5];
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            transposeF[i][j] = F[j][i];
        }
    }

    // Display  transpose 
    cout << "Transpose of matrix F:" << endl;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            cout << " " << transposeF[i][j];
        }
        cout << endl;
    }

    return 0;
}

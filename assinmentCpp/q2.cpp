#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int array[n];

   
    int count_even = 0, count_odd = 0;
    int sum_even = 0, sum_odd = 0;

    cout << "Enter your numbers: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> array[i];

        
        if(array[i] % 2 == 0) {
            count_even++;
            sum_even += array[i];
        } else {
            count_odd++;
            sum_odd += array[i];
        }
    }


    cout << "even numbers: " << count_even << endl;
    cout << "odd numbers: " << count_odd << endl;
    cout << "Sum  even numbers: " << sum_even << endl;
    cout << "Sum  odd numbers: " << sum_odd << endl;

    return 0;
}

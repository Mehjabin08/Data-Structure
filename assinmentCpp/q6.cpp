#include <iostream>
using namespace std;

int main(){
    int arr[6];
    int arr2[6];
    bool flag = true;
    int p=0;

    cout<<"Enter the elements in array: ";
    for(int i=0; i<6; i++){
        cin>>arr[i];
    }

    for(int n=0; n<6; n++){

    if (arr[n] <= 1){
        flag =false;
        }

    for (int i = 2; i <= arr[n] / 2; i++){
        if (arr[n] % i == 0){
            flag = false;
        }
    }

    if(flag == false){
        arr2[p]= arr[n];
        p++;
    }
    flag= true;
    }

    cout<<"Elements which are not prime: ";
    for(int i=0; i<p; i++){
        cout<<arr2[i]<<",";
    }

    return 0;
}


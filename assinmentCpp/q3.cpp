#include <iostream>
using namespace std ;


void OddEven (int min ,int max){
    cout << " Odd Number :"<< endl;
    for (int i= min;i<=max;i++){
        if (i%2!=0){
            cout << i<<" ";
        }
    }
    cout <<endl;

    cout << "Even Number: "<<endl;
    for (int i= min;i<=max;i++){
        if (i % 2 == 0){
            cout << i << " ";
        }
    }

    cout << endl;


}

int main (){

int number;
int min;
int max;
cout << "Enter Minimum Renge "<<endl;
cin>>min;

cout << "Enter The Maximum Renge "<<endl;
cin >>max;

OddEven (min,max);


return 0;
}
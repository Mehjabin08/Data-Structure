#include <iostream>
using namespace std ;


int main (){
int n ;
cout << "Enter The Value of n"<< endl;
cin>>n;

int array[n];
cout << "Enter Your Number "<< endl;
for(int i=0; i<n; i++){
    cin >> array[i];
}

cout << " Your Array in revrse order  "<< endl;
for (int i = n-1 ; i>=0 ;i-- ){
    cout << array[i];
}


    int large = array[0];
    int small = array[0];
    int sum = 0;
for (int i=0; i<n; i++){
    sum += array[i];

    if ( array[i]> large ){
        large = array [i];

    }

    else if (array[i]< small ){
        small = array[i];

    }

}

double avg ;
avg = sum /n;

cout << "Smallest element "<<small<<endl;
cout << " Large Element "<<large <<endl;
cout << "Sum "<<sum <<endl;
cout << "avarege "<< avg << endl;






return 0;
}
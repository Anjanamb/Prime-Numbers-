#include <iostream>
#include<iomanip>
using namespace std;

// Return type of functions 

bool isPrimeNumber(int number) {
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}


void main()
{   

    /*int number;
    cout << "Number : ";
    cin >> number;

    bool isPrimeFlag = isPrimeNumber(number);

    if (isPrimeFlag)
        cout << "Prime number" << endl;
    else
        cout<<"Not a prime number" << endl;*/

    for (int i = 1; i <= 1000; i++) {
        bool isPrime = isPrimeNumber(i);
        if (isPrime)
            cout << i << " is a prime number\n";
    }

    system("pause>0");
}

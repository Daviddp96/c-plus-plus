/* 
Write a function that returns true if a given number is prime
*/
#include<iostream>
using namespace std;

/* Iterative Solution*/
bool isPrime(int number) {
    if(number == 1) {
        return false;
    } else if (number > 3) {
        for(int i = 2; i < number; i++) {
            if(number % i == 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {

    int n;
    cin >> n;

    bool result = isPrime(n);

    cout << result;

    return 0;
}
/*
Write a function that returns true if a given number is palindrome.
*/
#include<iostream>
using namespace std;

bool isPalindrome(int number) {

    int digit;
    int original = number;
    long reversed = 0;

    while(number) {
        digit = number % 10;
        reversed = (reversed * 10) + digit;
        number /= 10;
    }

    return reversed == original;
}


int main() {

    cout << "Enter number:" << endl;

    int n;
    cin >> n;

    if(isPalindrome(n)) {
        cout << n << " is Palindrome";
    } else {
        cout << n << " is Not Palindrome";
    }

    return 0;
}
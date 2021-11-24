/*
Write a function that takes an integer and returns its number of digits.
*/
#include<iostream>
using namespace std;

typedef long long LL_INT;

LL_INT digits(LL_INT number) {
    LL_INT count = 0;
    while (number) {
        count++;
        number /= 10;
    }
    return count;
}

int main() {

    LL_INT n;
    cin >> n;

    LL_INT result = digits(n);

    cout << result;

    return 0;
}
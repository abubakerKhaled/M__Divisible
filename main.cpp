#include <iostream>
#include <string>
using namespace std;

int main() {
    string N; // number N as a string
    int X; // number X as an integer
    cin >> N >> X; // input N and X
    long long rem = 0; // remainder of N divided by X
    for (char c : N) { // loop through each digit of N
        rem = (rem * 10 + (c - '0')) % X; // update remainder using modulo arithmetic
    }
    if (rem == 0) { // if remainder is zero, N is divisible by X
        cout << "YES\n"; // output YES
    } else { // otherwise, N is not divisible by X
        cout << "NO\n"; // output NO
    }
    return 0;
}

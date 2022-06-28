#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter first number :- ";
    cin >> num1;
    cout << "Enter second number :- ";
    cin >> num2;

    cout << "Bitwise OR | :- " << (num1 | num2) << endl;
    cout << "Bitwise AND & :- " << (num1 & num2) << endl;
    cout << "Bitwise NOT ~ :- " << (~num1) << endl;
    cout << "Bitwise XOR ^ :- " << (num1 ^ num2) << endl;
    cout << "Bitwise Left Shift << :- " << (num1 << num2) << endl;
    cout << "Bitwise Right Shift >> :- " << (num1 >> num2) << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int operand1, operand2;
    cout << "Enter operand1 :- ";
    cin >> operand1;
    cout << "Enter operand2 :- ";
    cin >> operand2;
    operand1 += operand2;
    cout << "Using += " << operand1 << endl;
    operand1 -= operand2;
    cout << "Using -=  " << operand1 << endl;
    operand1 *= operand2;
    cout << "Using *= " << operand1 << endl;
    operand1 /= operand2;
    cout << "Using /= " << operand1 << endl;
    operand1 %= operand2;
    cout << "Using %= " << operand1 << endl;

    return 0;
}

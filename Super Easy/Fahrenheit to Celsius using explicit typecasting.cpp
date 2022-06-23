#include <bits/stdc++.h>
using namespace std;

int main()
{
    int fahrenheit;
    cout << "Please enter Fahrenheit value :-";
    cin >> fahrenheit;

    int celsius = (int)((5.0 / 9) * (fahrenheit - 32));
    cout << celsius;
}

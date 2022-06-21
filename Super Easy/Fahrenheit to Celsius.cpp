#include <bits/stdc++.h>
using namespace std;

int main()
{
    int fahrenheit = 0;

    while (fahrenheit <= 300)
    {
        int celsius = (5 * (fahrenheit - 32)) / 9;
        cout << "Celsius is :- " << celsius << endl;
        fahrenheit = fahrenheit + 20;
    }

    return 0;
}

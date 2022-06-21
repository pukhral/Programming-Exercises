#include <bits/stdc++.h>
using namespace std;

int main()
{
    int principalAmount, rateOfInterest, time;
    float simpleInterest;
    cout << "Please enter principal amount :- ";
    cin >> principalAmount;
    cout << "Please enter rate of interest :- ";
    cin >> rateOfInterest;
    cout << "Please enter time :- ";
    cin >> time;
    simpleInterest = principalAmount * rateOfInterest * time / 100.0;
    cout << "Simple interest is :- " << simpleInterest;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    float principleAmount, rateOfInterest, time, simpleInterest;
    cout << "Principle Amount: ";
    cin >> principleAmount;
    cout << "Rate of Interest: ";
    cin >> rateOfInterest;
    cout << "No. of Years: ";
    cin >> time;
    simpleInterest = (principleAmount * rateOfInterest * time) / 100;
    cout << "Simple Interest : " << simpleInterest << endl;
}
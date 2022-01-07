#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float point1x, point1y, point1z, point2x, point2y, point2z;
    cout << "x co-ordinate of Point 1: ";
    cin >> point1x;
    cout << "y co-ordinate of Point 1: ";
    cin >> point1y;
    cout << "z co-ordinate of Point 1: ";
    cin >> point1z;
    cout << "x co-ordinate of Point 2: ";
    cin >> point2x;
    cout << "y co-ordinate of Point 2: ";
    cin >> point2y;
    cout << "z co-ordinate of Point 2: ";
    cin >> point2z;

    float distance = sqrt(pow(point2x-point1x,2) + pow(point2y-point1y,2) + pow(point2z-point1z,2));

    cout << "Distance between (" << point1x << "," << point1y << "," << point1z << ") and (";
    cout << point2x << "," << point2y << "," << point2z << ") is " << distance << " units. " ;
}
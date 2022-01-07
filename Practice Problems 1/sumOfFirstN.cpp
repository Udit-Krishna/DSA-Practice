#include <iostream>
using namespace std;

int main() {
    int n, sum;
    cout << "Enter a Natural number: " ;
    cin >> n;
    if (n < 1){
        cout << "Enter a valid Natural number"; 
    } else {
        for (int a = 1; a <= n; a++) {
            sum += a;
        }
        cout << "Sum of first " << n << " Natural Numbers is " << sum;
    }
}
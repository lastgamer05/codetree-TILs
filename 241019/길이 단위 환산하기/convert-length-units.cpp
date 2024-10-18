#include <iostream>
using namespace std;

int main() {
    double n;
    cout << fixed;
    
    cin >> n;

    cout.precision(1);
    cout << n * 30.48;
    return 0;
}
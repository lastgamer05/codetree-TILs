#include <iostream>
using namespace std;

int main() {
    double a, b;

    cout << fixed;

    cin >> a >> b;
    cout.precision(2);
    cout << a + b;
    return 0;
}
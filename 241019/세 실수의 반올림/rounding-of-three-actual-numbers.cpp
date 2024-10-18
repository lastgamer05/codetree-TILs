#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << fixed;

    cin >> a >> b >> c;

    cout.precision(3);
    cout << a << "\n" << b << "\n" << c;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    float l, b, perimeter;

    cout << "Enter length and breadth: ";
    cin >> l >> b;

    perimeter = 2 * (l + b);

    cout << "Perimeter of Rectangle = " << perimeter;
    return 0;
}

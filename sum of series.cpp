#include <iostream>
using namespace std;

int main()
{
    int n;
    double sum = 0;

    cout << "Enter n: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        sum += (double)1 / i;
    }

    cout << "Sum = " << sum;

    return 0;
}

#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    double a, b, c;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    
    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a+b);
    // c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "c = " << c << "\n";

    return 0;
}
#include <iostream>
//數學函數包
#include <cmath>

int main(){
    using namespace std;

    double x = 3;
    double y = 4;
    double z;

    z = max(x, y);
    z = min(x, y);
    z = pow(3, 3);
    z = sqrt(25);
    z = abs(-10);
    z = round(4.5);
    z = ceil(4.1);
    z = floor(4.9);

    cout << z << "\n";
    
    return 0;
}
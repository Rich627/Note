#include <iostream>

using namespace std;
//這邊如果要改成用double要改三次，可以用template方法
// int max(int x, int y){
//     return (x > y) ? x : y;
// }


template <typename T, typename U>
//auto自動判斷return型態
auto max(T x, U y){
    return (x > y) ? x : y;
}

int main(){
    cout << max(5.5, 3) << endl;
}

#include <iostream>
namespace first{
    int x = 1;
}
namespace second{
    int x =2;
}

int main(){
    using namespace first;
    //這樣寫會報錯
//    int x = 0;
//    int x = 1;
    std::cout << second::x;
    //或是寫 using namespace xx在前面
    std::cout << x;
}

int main(){
    //這樣寫就不用寫std::cout
    using namespace std;
    cout << "Hello World";
}

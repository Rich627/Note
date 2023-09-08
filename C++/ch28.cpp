#include <iostream>

using namespace std;
void bakePizza();
void bakePizza(string topping1);

//函數名稱可以一樣，但是參數要不一樣
int main(){
    bakePizza("Pepperoni");
   
}

void bakePizza(){
    std::cout << "Here is your pizza";
}

void bakePizza(string topping1){
    cout << "Here is your" << topping1 << "pizza";
}
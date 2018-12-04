#include <iostream>

int sumTwoIntegers(int a, int b);

int main(){
    std::cout << "Hello world" << std::endl;
    int a=1;
    int b=2
    auto c=sumTwoIntegers(a,b);
    std::cout << "The sum of a and b is: " << c << std::endl;

    return 0;
}


int sumTwoIntegers(int a, int b){
    return a+b;
}
// swap number without using extra variable

#include <iostream>

int main(){
    int a{5};
    int b{7};
    std::cout << a << " " << b << std::endl;
    a=a^b;
    b=a^b;
    a=a^b;
    std::cout << a << " " << b << std::endl;
    return 0;
}
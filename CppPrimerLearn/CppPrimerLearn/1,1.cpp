#include <iostream>

void T1_4()
{
    int a = 2, b = 3;
    std::cout << a * b << std::endl;
}

void T1_5()
{
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of ";
    std::cout << v1;
    std::cout << " and ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1 + v2;
    std::cout << std::endl;
}

int main()
{
    //return -1;

    std::cout << "Hello World!" << std::endl;
    T1_4();
    T1_5();
    return 0;
}
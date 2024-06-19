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

void T1_8()
{
    std::cout << "/*";
    std::cout << "*/";
}

void T1_9()
{
    long long sum = 0;
    for (int i = 50; i < 101; ++i)
    {
        sum += 50;
    }
    std::cout << sum << std::endl;
}

void T1_10()
{
    for (int i = 10; i >= 0; --i)
    {
        std::cout << i << std::endl;
    }
}



int main()
{
    //return -1;

    std::cout << "Hello World!" << std::endl;
    T1_4();
    T1_5();
    T1_9();
    T1_10();
    return 0;
}
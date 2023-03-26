#include <iostream>

void practice_1_9()
{
    int sum = 0;
    for (int i = 50; i <= 100; ++i)
    {
        sum += i;
    }
    std::cout << sum;
}

void practice_1_10()
{
    for (int i = 10; i >= 0; --i)
    {
        std::cout << i << " ";
    }
}

void practice_1_11()
{
    int i = 0;
    int j = 0;
    std::cout << "请输入两个整数：\n";
    std::cin >> i >> j;
    if (i < j)
    {
        for (; i <= j; ++i)
        {
            std::cout << i << " ";
        }
    }
    else
    {
        for(;j<=i;++j)
        {
            std::cout<<j<<" ";
        }
    }

}

int main()
{
    practice_1_11();
    return 0;
}
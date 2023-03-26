#include <iostream>


int main()
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
#include <iostream>

int main()
{
    int i =0;
    int j =0;
    std::cout<<"请输入两个整数\n";
    std::cin>>i>>j;
    while (i<=j)
    {
        std::cout<<i<<" ";
        i++;
    }
    return 0;
}
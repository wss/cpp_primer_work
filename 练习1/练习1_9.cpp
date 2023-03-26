#include <iostream>

int main()
{
    int i=50;
    int val = 0;
    while (i<=100)
    {
        val+=i;
        i++;
    }
    std::cout<<val;

}
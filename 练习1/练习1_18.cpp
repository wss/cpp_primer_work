#include <iostream>

/*
  如果输入所有值相同则会输出42 42 42 42 a
   42 occurs 4 times
  如果输入所有值不同则会输出
   42 1 2 3 4 5 a
    42 occurs 1 times 
    1 occurs 1 times
    2 occurs 1 times
    3 occurs 1 times
    4 occurs 1 times
    5 occurs 1 times
*/
int main()
{
    int currval = 0, val = 0;
    if (std::cin >> currval)
    {
        int cnt = 1;
        while (std::cin >> val)
        {
            if (val == currval)
                ++cnt;
            else
            {
                std::cout << currval << " occurs " << cnt << " times " << std::endl;
                currval = val;
                cnt=1;
            }
        }
        std::cout<<currval<<" occurs "<<cnt<<" times "<<std::endl;
    }
    return 0;
}
#include <iostream>

/*
 如果输入全部相同的数字则会统计该数字后输出
 如果输入全部不相同的数字则会分别统计后输出
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
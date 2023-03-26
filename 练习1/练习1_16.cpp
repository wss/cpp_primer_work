#include <iostream>

int main()
{
    int sum = 0;
    int value = 0;
    std::cout << "请输入整数，按Ctrl+Z结束输入：" << std::endl;
    while (std::cin >> value)
    {
        sum += value;
    }
    std::cout << "累加结果为：" << std::endl;
    std::cout << sum << std::endl;

    return 0;
}
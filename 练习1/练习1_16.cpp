#include <iostream>

int main()
{
    int sum = 0;
    int value = 0;
    std::cout << "��������������Ctrl+Z�������룺" << std::endl;
    while (std::cin >> value)
    {
        sum += value;
    }
    std::cout << "�ۼӽ��Ϊ��" << std::endl;
    std::cout << sum << std::endl;

    return 0;
}
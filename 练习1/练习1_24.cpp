#include "Sales_item.h"

#include <iostream>

/*
1-1 2 100
1-1 3 100
1-1 4 100
1-1 1 100
1-2 2 150
1-1 2 200 100 occurs 4 times
*/

int main()
{
    Sales_item curritem,valitem;
    if(std::cin>>curritem)
    {
        int cnt = 1;
        while (std::cin>>valitem)
        {
            if(valitem.isbn()==curritem.isbn())
            {
                ++cnt;
            }
            else
            {
                std::cout<<curritem<<" occurs "<<cnt<<" times"<<std::endl;
                curritem = valitem;
                cnt = 1;
            }
        }
         std::cout<<curritem<<" occurs "<<cnt<<" times"<<std::endl;
    }
    return 0;
}
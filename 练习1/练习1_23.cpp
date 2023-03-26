#include "Sales_item.h"

#include <iostream>


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
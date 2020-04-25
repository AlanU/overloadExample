#include "college.h"
#include <iostream>

college::college()
{

}

college::college(const std::string & name)
{
    m_name = name;
}

void college::show()
{
    std::cout<<"College Name: "<<m_name<<"\n";
}

void college::show(int times)
{
    for(int time = 0;time < times ; ++time)
    {
        std::cout<<"College Name-: "<<m_name<<"\n";
    }
}

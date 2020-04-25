#pragma once
#include <string>

class college
{
public:
    explicit college(const std::string & name);
    college();
    void show();
    void show(int arg);
private:
    std::string m_name = "";
};


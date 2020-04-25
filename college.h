#pragma once
#include <string>

class college
{
public:
    explicit college(const std::string & name);
    college();
    void show();
    void show(int arg);
    void setName(const std::string & name);
private:
    std::string m_name = "";
};


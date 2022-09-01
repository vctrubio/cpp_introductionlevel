
#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Convert
{
    std::string _input;
    int _type;
    double _value;
public:
    Convert();
    ~Convert();
    Convert(char *argv);
    Convert(Convert &conv);
    Convert &operator=(Convert &conv);

    void detectType(char *argv);
    void convChar(void);
    void convInt(void);
    void convFloat(void);
    void convDouble(void);

    int getType(void);
    std::string &getInput(void);
    double getValue(void);
    void setValue(double x);
};

std::ostream &operator<<(std::ostream &ost, Convert &conv);

#endif

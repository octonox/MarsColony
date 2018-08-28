#ifndef LOG_HPP
#define LOG_HPP
#include <fstream>
#include <string>
#include <iostream>
#include <cstdlib>

class Log
{
public:
    Log(std::string const& filename);
    ~Log();

    void operator()(std::string const& whatever)
    {
        _file << whatever << std::endl;
    }

private:
    std::ofstream _file;
};

#endif // LOG_HPP

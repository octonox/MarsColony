#include "log.hpp"

Log::Log(std::string const& file) : _file(file.c_str())
{
    if(!_file)
    {
        std::cerr << "Unable to open file \"" << file << "\"\nAborting...";
        abort();
    }
}

Log::~Log()
{
    _file.close();
}

#ifndef LOG_H
#define LOG_H


class Log
{
    public:
        Log(std::ifstream file);
        ~Log();

    protected:

    private:
        std::ifstream _file;
};

#endif // LOG_H

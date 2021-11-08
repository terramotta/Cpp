/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <string>
#include <sstream>
#define LOG(x) std::cout << x << std::endl;

using namespace std;

class Log
{
public:
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;

private:
    int m_LogLevel; // convencionei "m_" para variaveis de class's

public:
    void SetLevel(int level)
    {
        m_LogLevel = level;    
    }

public:
    void Error(const char* message)
    {
        if (m_LogLevel >= LogLevelError)
        std::cout << "[Error]: " << message << std::endl;       
    }
    
    void Warn(const char* message)
    {
        if (m_LogLevel >= LogLevelWarning)
        std::cout << "[WARNING]: " << message << std::endl;       
    }

    void Info(const char* message)
    {
        if (m_LogLevel >= LogLevelInfo)
        std::cout << "[INFO]: " << message << std::endl;       
    }
};


int main()
{
    Log log;
    log.SetLevel(log.LogLevelInfo);
    
    log.Warn("Hello!"); //printa um aviso
    
    log.Info("Teste de informação"); //printa uma informação
    std::cin.get();
    return 0;
}

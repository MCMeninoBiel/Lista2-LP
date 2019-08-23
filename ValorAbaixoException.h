#ifndef VALORABAIXOEXCEPTION_H
#define VALORABAIXOEXCEPTION_H
#include <exception>
#include <string>

class ValorAbaixoException:public std::exception
{
    public:
        ValorAbaixoException()throw();
        virtual ~ValorAbaixoException()throw();
        virtual std::string what();
        void ValorAbaixo();

    protected:
        std::string msg = "valor abaixo";
    private:
};

#endif // VALORABAIXOEXCEPTION_H

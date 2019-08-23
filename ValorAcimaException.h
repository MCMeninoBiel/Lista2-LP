#ifndef VALORACIMAEXCEPTION_H
#define VALORACIMAEXCEPTION_H

#include <exception>
#include <string>


class ValorAcimaException:public std::exception
{
    public:
        ValorAcimaException()throw();
        virtual ~ValorAcimaException()throw();
        virtual std::string what();
        void ValorAcima();

    protected:
        std::string msg = "VALOR ACIMA";

    private:
};

#endif // VALORACIMAEXCEPTION_H

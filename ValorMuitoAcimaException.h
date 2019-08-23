#ifndef VALORMUITOACIMAEXCEPTION_H
#define VALORMUITOACIMAEXCEPTION_H
#include <exception>
#include <string>


class ValorMuitoAcimaException:public std::exception
{
    public:
        ValorMuitoAcimaException()throw();
        virtual ~ValorMuitoAcimaException()throw();
        virtual std::string what();
        void ValorMuitoAcima();

    protected:
        std::string msg = "VALOR MUITO ACIMA";

    private:
};

#endif // VALORMUITOACIMAEXCEPTION_H

#include "Studente.h"

int Studente::getMinYears()
{
    return 6;
}

int Studente::getMaxYears()
{
    return 25;
}

ostream& operator<<(ostream& os, const Studente& obj)
{
    return obj.print(os);
}

ostream& Studente::print(ostream& os)const
{
    os<< "[Studente] "<<endl;
    Cittadino::print(os);
    return os;
}




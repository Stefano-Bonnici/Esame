#include "Pensionato.h"


int Pensionato::getMinYears()
{
    return 65;
}

int Pensionato::getMaxYears()
{
    return 90;
}


ostream& operator<<(ostream& os, const Pensionato& obj)
{
    return obj.print(os);
}

ostream& Pensionato::print(ostream& os) const
{
    os << "[Pensionato] "<< endl;
    Cittadino::print(os);
    return os;
}





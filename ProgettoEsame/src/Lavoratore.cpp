#include "Lavoratore.h"

int Lavoratore::getMinYears()
{
    return 18;
}

int Lavoratore::getMaxYears()
{
    return 70;
}

ostream &operator<<(ostream &os, const Lavoratore &obj)
{
    return obj.print(os);
}

ostream &Lavoratore::print(ostream &os) const
{
    os << "[Lavoratore] " << endl;
    Cittadino::print(os);
    return os;
}



/*
 * Pensionato.h
 *
 *  Created on: 1 ott 2021
 *      Author: ACER
 */

#ifndef PENSIONATO_H
#define PENSIONATO_H

#include "Cittadino.h"

class Pensionato : public Cittadino
{
protected:
    ostream &print(ostream &os) const;

public:
    Pensionato(){}
    int getMinYears();
    int getMaxYears();
    string getNome();
    string getCognome();
    string getCity();
    double getSalario();
    friend ostream &operator<<(ostream &, const Pensionato &);
};

#endif

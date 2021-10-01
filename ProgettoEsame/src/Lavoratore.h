/*
 * Lavoratore.h
 *
 *  Created on: 1 ott 2021
 *      Author: ACER
 */

#ifndef LAVORATORE_H
#define LAVORATORE_H

#include "Cittadino.h"

class Lavoratore : public Cittadino
{
protected:
    ostream &print(ostream &os) const;

public:
    Lavoratore(){}
    int getMinYears();
    int getMaxYears();
    string getNome();
    string getCognome();
    string getCity();
    double getSalario();
    friend ostream& operator<<(ostream&, const Lavoratore&);
};

#endif

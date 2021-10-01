/*
 * Studente.h
 *
 *  Created on: 1 ott 2021
 *      Author: ACER
 */

#ifndef STUDENTE_H
#define STUDENTE_H

#include "Cittadino.h"

class Studente : public Cittadino
{
    protected:
        ostream &print(ostream &os)const;

    public:
        Studente(){}
        int getMinYears();
        int getMaxYears();
        string getNome();
        string getCognome();
        string getCity();
         friend ostream& operator<<(ostream&, const Studente&);

};

#endif

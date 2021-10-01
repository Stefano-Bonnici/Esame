/*
 * Cittadino.h
 *
 *  Created on: 1 ott 2021
 *      Author: ACER
 */

#ifndef CITTADINO_H
#define CITTADINO_H

#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string>



using namespace std;

class Cittadino
{
protected:
    string Nome;
    string Cognome;
    double Salario;
    string City;
    string tipoCittadino;
    virtual ostream &print(ostream &os) const;

public:
    Cittadino();
    int Years;
    virtual int getMaxYears()=0;
    virtual int getMinYears()=0;
    friend ostream &operator<<(ostream &, Cittadino &);
    friend bool operator<(Cittadino &, Cittadino &);
    friend bool operator>(Cittadino &, Cittadino &);
    friend bool operator>=(Cittadino &, Cittadino &);
    friend bool operator<=(Cittadino &, Cittadino &);

    //metodi setter
    void setYears(int);
    void setNome(string);
    void setCognome(string);
    void setCity(string);
    void setTipoCittadino(string);
    void setSalario(double);


    //metodi getter
    int getYears() const;
    string getNome() const;
    string getCognome() const;
    string getCity() const;
    double getSalario() const;
    string getTipoCittadino() const;

    friend istream& operator>>(istream& in, Cittadino &c) {
		string salario;
		getline(in, c.Nome, ',');
		getline(in, c.Cognome, ',');
		getline(in, c.City, ',');
		getline(in, salario, '\n');
		c.Salario = stod(salario);
		return in;
	}
};

#endif

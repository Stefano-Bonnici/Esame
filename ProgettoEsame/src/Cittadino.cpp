#include "Cittadino.h"

using namespace std;

Cittadino::Cittadino(){}

//setter
void Cittadino :: setNome(string nome){
    this->Nome = nome;
}

void Cittadino :: setCognome(string Cognome){
    this->Cognome = Cognome;
}

void Cittadino :: setCity(string City){
    this->City = City;
}

void Cittadino :: setSalario(double Salario){
    this->Salario = Salario;
}

void Cittadino :: setYears(int Years){
    this->Years = Years;
}

void Cittadino :: setTipoCittadino(string tipoCittadino) //da rivedere
{
    this->tipoCittadino=tipoCittadino;
}

//getter
string Cittadino :: getNome()const{
    return Nome;
}

string Cittadino :: getCognome()const{
    return Cognome;
}

string Cittadino :: getCity()const{
    return City;
}

double Cittadino :: getSalario()const{
    return Salario;
}

string Cittadino :: getTipoCittadino()const
{
    return tipoCittadino;
}

int Cittadino :: getYears()const{
    return Years;
}

ostream& Cittadino::print(ostream& os) const
{
    os << "years: " << Years << " Nome: "<< Nome << " Cognome: "<< Cognome << " City: " << City << " Salario: "<< Salario << endl;
    return os;
}

ostream& operator<<(ostream& os, Cittadino& obj)
{
    return obj.print(os);
}

bool operator<( Cittadino& obj0, Cittadino& obj1)
{
    return (obj0.Years < obj1.Years);
}

bool operator>( Cittadino& obj0,Cittadino& obj1)
{
    return (obj0.Years > obj1.Years);
}

bool operator>=( Cittadino& obj0, Cittadino& obj1)
{
    return (obj0.Years >= obj1.Years);
}

bool operator<=( Cittadino& obj0,  Cittadino& obj1)
{
    return (obj0.Years <= obj1.Years);
}

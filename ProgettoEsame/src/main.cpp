//============================================================================
// Name        : ProgettoEsame.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <math.h>
#include <fstream>

#include "Cittadino.h"
#include "Studente.h"
#include "Lavoratore.h"
#include "Pensionato.h"
#include "BST.h"


using namespace std;

const int casoStudente = 0;
const int casoLavoratore = 1;
const int casoPensionato = 2;
const int casiTotali = 3;

int rangeRandom(int min, int max)
{
    return min + rand() % (max - min + 1);
}

//estrae parole singole da txt
string estraiProxFrammento(string &line, size_t &currentIndex)
{
    size_t currentFragmentEnd = line.find(",", currentIndex);
    if (currentFragmentEnd >= line.length())
        currentFragmentEnd = line.length();

    string fragment = line.substr(currentIndex, currentFragmentEnd - currentIndex);
    currentIndex = currentFragmentEnd + 1;

    return fragment;
}

int main(int argc, char const *argv[])
{
    ifstream inputFile("cittadini.txt");

    int N;

    cout << "inserire numero Cittadini" << endl;
    cin >> N;

    BST<Cittadino*> cittadini;
    int numeroStudenti = 0;
    int numeroLavoratori = 0;
    int numeroPensionati = 0;

    for (int i = 0; i < N; i++)
    {
        int tipoCittadino = rand() % casiTotali;
        Cittadino* currentobj;
        switch (tipoCittadino)
        {


        case casoStudente:
            currentobj=new Studente();
            ++numeroStudenti;
            break;

        case casoLavoratore:
            currentobj=new Lavoratore();
            ++numeroLavoratori;
            break;

        case casoPensionato:
            currentobj=new Pensionato();
            ++numeroPensionati;
            break;
        }
        int minAge = currentobj->getMinYears();
        int maxAge = currentobj->getMaxYears();

        string line;

        double Salario;

        if (getline(inputFile, line))
        {
            size_t currentIndex = 0;
            while (currentIndex < line.length())
            {

                currentobj->setCognome(estraiProxFrammento(line, currentIndex));            //  Cognome
                currentobj->setNome(estraiProxFrammento(line, currentIndex));         // Nome
                currentobj->setCity(estraiProxFrammento(line, currentIndex));       //citta
                currentobj->setSalario(Salario=(rand()%3000)+900); // salario
            }
        }
        currentobj->setYears(rangeRandom(minAge, maxAge));
        cittadini.insert(currentobj);


    }
    //SECONDO PUNTO

    cittadini.inorder();

    //TERZO PUNTO IMPLEM.NEL BST TRAMITE


    //QUARTO PUNTO
    int z;
    cout<<"inserisci un valore"<<endl;
    cin>>z;
    int contatori[3]={0,0,0};
    cittadini.inorderEtaMinore(z,contatori);
    cout<<"numero studenti = "<<contatori[0]<<endl;
    cout<<"numero lavoratori = "<<contatori[2]<<endl;
    cout<<"numero pensionati = "<<contatori[1]<<endl;

}

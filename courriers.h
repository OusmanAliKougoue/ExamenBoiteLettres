#ifndef COURRIERS_H
#define COURRIERS_H
#include <iostream>
#include <string>
#include <ostream>
using namespace std;
enum Mode {express,normal};
class courriers
{
protected:
    double poids;
    Mode mode_expedition;
    string adre_destination;
    string adre_expedition;
public:
    courriers(double,Mode,string&,string&);
    ~courriers();
    virtual ostream& afficher(ostream& );
    friend ostream& operator<<(ostream& ,courriers&);
    virtual double calcul_prix()=0;
};
#endif
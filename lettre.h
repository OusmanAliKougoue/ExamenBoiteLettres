#ifndef LETTRE_H
#define LETTRE_H
#include "courriers.h"
#include <iostream>
#include <string>
#include <ostream>
using namespace std;
enum Format {A3,A4};
class lettre: public courriers
{
private:
    Format format;
public:
    lettre(double,Mode,string&,string&,Format);
    ~lettre();
     virtual ostream& afficher(ostream& );
    friend ostream& operator<<(ostream& ,lettre&);
    double calcul_prix();
};
#endif
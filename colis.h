#ifndef COLIS_H
#define COLIS_H
#include "courriers.h"
#include <iostream>
#include <string>
#include <ostream>
using namespace std;
class colis:public courriers
{
private:
   double volume;
public:
    colis(double,Mode,string&,string&,double);
    ~colis();
    virtual ostream& afficher(ostream& );
    friend ostream& operator<<(ostream& ,colis&);
    double calcul_prix();
};

#endif
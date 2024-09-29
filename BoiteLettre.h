#ifndef BOITELETTRE_H
#define BOITELETTRE_H
#include "courriers.h"
#include <iostream>
#include <string>
#include <ostream>
using namespace std;
class BoiteLettre
{
private:
    double hauteur;
    double volume1;
    int max=10;
    courriers** tab;
public:
    BoiteLettre(double,double);
   virtual ~BoiteLettre();
   void ajouter(courriers* );
   void afficherBoite();
   double prix_timbre();
};
#endif
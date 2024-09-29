#include "BoiteLettre.h"
#include "colis.h"
#include "lettre.h"
#include "courriers.h"
#include <iostream>
#include <string>
#include <ostream>
using namespace std;
int main()
{
    string a="Dakar";
    string b="SL";
    lettre l1(4.2,express,a,b,A4),l2(1.5,normal,b,a,A3);
    cout<<l1<<endl;
    string ad1="Thies";
    string ad2="Ndjamena";
    colis c1(3.3,normal,ad1,ad2,0.93),c2(1.5,express,ad2,ad1,0.23);
    cout<<c2<<endl;
    BoiteLettre boite(8.1,20.5);
    boite.ajouter(&l1);
    boite.ajouter(&l2);
    boite.ajouter(&c1);
    boite.ajouter(&c2);

    boite.afficherBoite();
    cout<<"le prix du timbre est :"<<boite.prix_timbre()<<endl;

    return 0;
}
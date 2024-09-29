#include "courriers.h"
courriers::courriers(double p,Mode m,string& adr_d,string&adr_e)
{
    cout<<"\nAppel du constructeur pour la classe Courrier adress= "<<this<<endl;
    poids=p;
    mode_expedition=m;
    adre_destination=adr_d;
    adre_expedition=adr_e;
}

courriers::~courriers()
{
    cout<<"\nAppel du destructeur pour la classe Courrier adress= "<<this<<endl;
}
ostream& courriers::afficher(ostream& sortie){
    sortie<<"Poids :"<<poids<<endl;
    sortie<<"Mode d'expedition :"<<mode_expedition<<endl;
    sortie<<"adresse de destination :"<<adre_destination<<endl;
    sortie<<"adresse d'expedition :"<<adre_expedition<<endl;
    return sortie;

 }
ostream& operator<<(ostream& sortie,courriers& co){
    return co.afficher(sortie);
}
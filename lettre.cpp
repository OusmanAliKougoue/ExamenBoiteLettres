#include "lettre.h"
lettre::lettre(double p,Mode m,string& adr_d,string&adr_e,Format f)
:courriers(p,m,adr_d,adr_e)
{
    cout<<"\nAppel du constructeur pour la classe lettre adress= "<<this<<endl;
    format=f;
}
lettre::~lettre()
{
   cout<<"\nAppel du destructeur pour la classe lettre adress= "<<this<<endl;
}
 ostream& lettre::afficher(ostream& sortie){
    courriers::afficher(sortie);
    sortie<<"le format :"<<format<<endl;
    return sortie;

 }
ostream& operator<<(ostream& s,lettre& lt){
    return lt.afficher(s);
}
double lettre::calcul_prix(){
    if(mode_expedition==normal){
        if(format==A4){
            return 250+1.0*poids*1000;
        }
        else {
             return 350+1.0*poids*1000;
        }
    }
    else {
        if(format==A4){
            return 2*(250+1.0*poids*1000);
        }
        else {
             return 2*(350+1.0*poids*1000);
        }
    }

}
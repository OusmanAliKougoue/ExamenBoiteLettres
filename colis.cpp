#include "colis.h"
colis::colis(double p,Mode m,string& adr_d,string&adr_e,double vol):
courriers(p,m,adr_d,adr_e)
{
     cout<<"\nAppel du constructeur pour la classe colis adress= "<<this<<endl;
     volume=vol;
}

colis::~colis()
{
     cout<<"\nAppel du destructeur pour la classe colis adress= "<<this<<endl;
}
 ostream& colis::afficher(ostream& sot){
    courriers::afficher(sot);
    sot<<"le volume :"<<volume<<endl;
    return sot;

 }
ostream& operator<<(ostream& s,colis& col){
    return col.afficher(s);
}
double colis::calcul_prix(){
    double m=0.25*(volume*1000)+poids*1.0;
    if(mode_expedition==normal){
       return m;
    }
    else {
        return 2*m;
    }
}
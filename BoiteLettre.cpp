#include "BoiteLettre.h"
BoiteLettre::BoiteLettre(double h,double v)
{
     cout<<"\nAppel du constructeur pour la classe Courrier adress= "<<this<<endl;
     hauteur=h;
     volume1=v;
     tab=new courriers*[max];
     for(int i=0; i< max; i++){
        tab[i]=nullptr;
     }
}

BoiteLettre::~BoiteLettre()
{
    if(tab) delete []tab;
}
void BoiteLettre::ajouter(courriers* c){
    for(int i=0; i < max;i++){
        if(tab[i]==nullptr){
            tab[i]=c;
            break;
        }
    }
}
void BoiteLettre::afficherBoite(){
    cout<<"Hauteur= "<<hauteur<<endl;
    cout<<"Volume= "<<volume1<<endl;
    for(int i=0; i < max;i++){
        if(tab[i]!=nullptr){
           cout<<*tab[i];cout<<endl;
        }
    }

}
double BoiteLettre::prix_timbre(){
    double montant=0.0;
    for(int i=0; i < max;i++){
        if(tab[i]!=nullptr){
            montant+=tab[i]->calcul_prix();
        }
    }
    return montant;
}
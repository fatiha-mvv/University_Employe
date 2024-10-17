#include "Universite.h"


//------> Constructeur sans params
Universite::Universite() :compt(0)
{
    //initialiser au pointeur null
    for (int i = 0; i < this->TAILLE_MAX_TAB; ++i)
        employes[i] = nullptr;
}


//------> Fonction ajouterNouveauEmploye
bool Universite::ajouterNouveauEmploye(Employe* emp)
{
    if (this->compt < TAILLE_MAX_TAB) //tableau non-plein encore
    {
        employes[this->compt++] = emp;
        return true;
    }
    cout << "tableau saturee" << endl;
    return false; //tab sature
}


//------> Foncion d'affichage
void Universite::afficher() const
{
    cout << "************ Employes *********" << endl;
    for (int i = 0; i < this->compt; ++i)
    {
        if (employes[i] != nullptr)
            employes[i]->afficherInfo();
        cout << "-------------------------------"<<endl;
    }
}


//-------> destructeur
Universite::~Universite()
{
    //liberation de memoire
    for (int i = 0; i < this->compt; ++i)
        delete employes[i];
}


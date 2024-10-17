#include "Employe.h"


//-------> Constructeur avec params
Employe::Employe(string nom, string prenom, string poste)
	:nom(nom), prenom(prenom), poste(poste)
{}

//-------> Fonction afficherInfo 
void Employe::afficherInfo() const
{
	cout << "nom: " << this->nom << endl;
	cout << "prenom: " << this->prenom << endl;
	cout << "poste: " << this->poste << endl;
}





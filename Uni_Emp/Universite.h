#pragma once
#include "Employe.h"

class Universite
{
private:
	static const int TAILLE_MAX_TAB = 10;//taille max
	Employe* employes[TAILLE_MAX_TAB];//tableau des employes
	int compt; //compteur des emmployes

public:
	Universite();
	bool ajouterNouveauEmploye(Employe* emp);
	void afficher()const;
	~Universite();

};


// Uni_Emp.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Universite.h"

int main()
{
    Universite universite;

    // Ajout d'employes
    universite.ajouterNouveauEmploye(new Employe("nom1", "prenom1", "poste1"));
    universite.ajouterNouveauEmploye(new Employe("nom2", "prenom2", "poste2"));

    universite.afficher();
}
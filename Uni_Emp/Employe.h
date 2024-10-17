#pragma once
#include <iostream>
using namespace std;

class Employe
{
private:
	string nom;
	string prenom;
	string poste;
public:
	Employe(string, string, string);
	void afficherInfo() const;

};


#pragma once
#include <iostream>
#include "string.h"
using namespace std;

class Compte
{
private :

	string nom;
	string prenom;
	string adresse;
	int ncompte;
	float solde;
	int decouvertmax = 100;
	int debitmax;
public :
	void setNumerocompte(int c);
	void crediter(int credit);
	void debiter(int debit);
	void virement(float vire, Compte* dest);
	void setDecouvertmax(int a);
	void setDebitmax(int b);
	void setAdresse(string c);
	string getNom();
	string getPrenom();
	string getAdresse();
	int getNcompte();
	float getSolde();
	float getDecouvertmax();
	float getDebitmax();
	void setNom(string n);
	void setPrenom(string n);
	void setSolde(int c);


};


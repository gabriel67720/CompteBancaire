#include "Compte.h"

void Compte::setNumerocompte(int c)
{
	ncompte = c;
}

void Compte::crediter(int credit)
{
	solde = solde + credit;
}

void Compte::debiter(int debit)
{
	if (debit < debitmax)
	{
		if( solde + decouvertmax > debit)
		
			solde = solde - debit;
	}
}


void Compte::virement(float vire, Compte* dest)
{
	debiter(vire);
	dest->crediter(vire);
}

void Compte::setDecouvertmax(int a)
{
	decouvertmax = a;
}

void Compte::setDebitmax(int b)
{
	debitmax = b;
}

void Compte::setAdresse(string c)
{
	adresse = c;
}

string Compte::getNom()
{
	return nom;
}

string Compte::getPrenom()
{
	return prenom;
}

string Compte::getAdresse()
{
	return adresse;
}

int Compte::getNcompte()
{
	return ncompte;
}

float Compte::getSolde()
{
	return solde;
}

float Compte::getDecouvertmax()
{
	return decouvertmax;
}

float Compte::getDebitmax()
{
	return debitmax;
}

void Compte::setNom(string n)
{
	nom = n;
}

void Compte::setPrenom(string n)
{
	prenom = n;
}

void Compte::setSolde(int c)
{
	solde = c;
}



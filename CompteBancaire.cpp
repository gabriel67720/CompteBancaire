// CompteBancaire.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Compte.h"
using namespace std;

int main()
{

	Compte compte1, compte2, compte3;
	string nom;
	string prenom;
	string adresse;
	int numcompte = 0;
	int solde;

	char a;

	cout << "Voulez-vous créer un compte ? (o/n)" << endl;
	cin >> a;
	if (a == 'o')
	{
		cout << "Veuillez entrer votre nom : ";
		cin >> nom;
		compte1.setNom(nom);

		cout << "Veuillez entrer votre prenom : ";
		cin >> prenom;
		compte1.setPrenom(prenom);

		cout << "Veuillez entrer votre adresse : ";
		cin >> adresse;
		compte1.setAdresse(adresse);

		cout << "Veuillez entrer votre solde de base : ";
		cin >> solde;
		compte1.setSolde(solde);

		cout << "Voici votre nouveau compte : " << endl;
		cout << "Nom : ";
		cout << compte1.getNom() << endl;

		cout << "Prenom : ";
		cout << compte1.getPrenom() << endl;

		cout << "Adresse : ";
		cout << compte1.getAdresse() << endl;
		
		cout << "Voici votre solde : ";
		cout << compte1.getSolde() << endl;

		cout << "Votre numero de compte est le suivant : ";
		numcompte++;
		compte1.setNumerocompte(numcompte);
		cout << compte1.getNcompte() << endl;

		int somme;
		cout << "Entrez une somme a crediter : ";
		cin >> somme;
		compte1.crediter(somme);
		cout << "Voici votre nouveau solde : ";
		cout << compte1.getSolde() << endl;

		cout << "Entrez une somme a debiter : ";
		cin >> somme;
		compte1.debiter(somme);
		cout << "Voici votre nouveau solde : ";
		cout << compte1.getSolde() << endl;
	}
}


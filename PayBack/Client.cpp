#include <iostream>
#include "Client.h"

using namespace std;

Client::Client(string nom)	{
	m_nom = nom;
	m_solde = 0;
}

Client::Client()	{
	m_nom = "jean";
	m_solde = 0;
}

void Client::depense(double montant)	{
	m_solde += montant;
}

void Client::afficher()	const	{
	cout << m_nom <<" a depense " << m_solde << " euros." <<endl;
}

//Accesseur
string Client::getNom()	const	{
	return m_nom;
}

double Client::getSolde() const	{
	return m_solde;
}

double Client::getMatricule() const	{
	return m_matricule;
}

//mutateur
void Client::setSolde(double solde)	{
	m_solde = solde;
}






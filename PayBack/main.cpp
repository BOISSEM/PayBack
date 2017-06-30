#include <iostream>
#include <string>
#include <vector>

#include "Client.h"
//#include "Client.cpp"

using namespace std;
string demander_action();
void actions(string);

vector<Client> tab_client;

int main(void)
{
	string action;

	while(action != "fin")	{
		action = demander_action();
		actions(action);
	}

	return 0;
}

/*
	Entree: rien 
	Sortie: L'action que l'on veut réaliser 

	Cette fonction permet à l'utilisateur de choisir 
	l'action qu'il souhaite réaliser
*/
string demander_action ()
{
        string reponse;
        cout << "\nQue veux tu faire ?" << endl;
        cout << "Ajouter un participant : participant" << endl;
        cout << "Ajouter une depense : depense " << endl;
        cout << "Afficher le solde d'un participant : solde" << endl;
        cout << "Si tu veux savoir qui doit quoi : dettes " << endl ;
        cout << "Si tu as fini et que tu veux arreter : fin " << endl << endl;

        cin >> reponse;

        return reponse;
}

/*
	Entree: Action que l'on souhaite réaliser 
	Sortie: Rien 

	Cette fonction execute l'action demandée. 
	Elle retourne un message d'erreur dans le cas où la réponse
	n'est pas comprise. 
*/

void actions(string action)
{
	if(action == "participant")	{
		string new_nom;
		cout << "Quel est le nom de ce nouveau participant ?"<< endl;
		cin >> new_nom;

		Client new_client(new_nom);
		tab_client.push_back(new_client);
	}
	else if(action == "depense")	{
		double depense;
		string nom;
		cout << "Combien a t'il depense ?" << endl;
		cin >> depense;
		cout << "Qui a depense ?" << endl;
		cin >> nom;

		for(vector<Client>::iterator it = tab_client.begin() ; it != tab_client.end() ; ++it)	{
			if(it->getNom() == nom)	{
				it->setSolde(depense+it->getSolde());
			}
		}
	}
	else if(action == "solde")	{
		string nom;
		cout << "De qui voulez vous affichez le solde ?" << endl;
		cin >> nom;

		for(vector<Client>::iterator it = tab_client.begin() ; it != tab_client.end() ; ++it)	{
			if(it->getNom() == nom)	{
				cout << nom << " possede " << it->getSolde() << " euros." << endl;
			}
		}	
	}
	else if(action == "dettes")	{

	}	
	else if(action == "fin")	{
		cout << "Au revoir!" << endl;
	}
	else	{
		cerr << "Reponse non valide" << endl;
	}
}











#ifndef CLIENT_H
#define CLIENT_H

class Client	{
public:
	Client();
	Client(std::string);
	void depense(double);
	void afficher() const;

	//Accesseur
	std::string getNom() const;
	double getSolde() const;
	double getMatricule() const;
	//mutateur
	void setSolde(double);

private:
	std::string m_nom;
	double m_solde;
	double m_matricule;
};

#endif
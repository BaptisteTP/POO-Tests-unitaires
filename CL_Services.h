#pragma once
#include "CL_Clients.h"
#include "CL_Employes.h"
#include "CL_Statistique.h"
#include "CL_Commandes.h"
#include "CL_Articles.h"
#include "CL_LVBDD.h"

public ref class CL_Services
{
private:
	CL_Clients^ Client;
	CL_Employes^ Employe;
	CL_Statistique^ stats;
	CL_Commandes^ Commande;
	CL_Articles^ Article;
	CL_Statistique^ Statistique;

	CL_LVBDD^ lien;

public:

	System::Boolean ajouterPersonne(System::String^ nom, System::String^ prenom, System::String^ adresse, System::String^ dateEmbauche, unsigned int IDsuperieur, System::String^, System::String^);
	System::String^ test();
	void supprimerPersonne(unsigned int IDpersonnel);
	void modifierPersonne(unsigned int IDpersonnel, System::String^ NouveauNom, System::String^ NouveauPrenom, System::String^ dateEmbauche, unsigned int IDsuperieur);
	void afficherPersonne(System::String^ nom, System::String^ prenom);
	System::Data::DataSet^ afficherToutPersonne(System::String^);
	System::Boolean doExistClient(System::String^ nom, System::String^ prenom);
	void ajouterClient(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	void ajouterAdresseClient(unsigned int IIDclient, System::String^ adresse, System::String^ type);
	void supprimerAdresseClient(unsigned int IDclient, System::String^ adresse, System::String^ type);
	void modifierAdresseClient(unsigned int IDclient, System::String^ adresse, System::String^ type);
	void supprimerClient(unsigned int IDclient);
	void modifierClient(unsigned int IDclient, System::String^ NouveauNom, System::String^ NouveauPrenom, System::String^ NouvelledatePremAchat, unsigned int NouveauIDclient);
	System::Data::DataSet^ afficherClient(System::String^);
	void ajouterCommande(System::String^ nomClient, System::String^ prenomClient, System::String^ methodePaiement, System::String^ dateEm, System::String^ dateLiv, System::String^ datePaiement, System::String^ Articles, int Quantite);
	void supprimerCommande(unsigned int IDcommande);
	void modifierCommande(unsigned int IDcommande, unsigned int NouveauIDclient, System::String^ NouvelleVilleLivraison, int NouveauMethodePaiment);
	void afficherCommande(unsigned int IDcommande);
	System::Data::DataSet^ afficherToutCommande(System::String^);
	System::Boolean CheckArticleCommande(System::String^ reference);
	void ajouterArticle(System::String^, System::String^, System::String^, System::String^, unsigned int, double);
	void supprimerArtcile(unsigned int IDarticle);
	void ModifierArticle(unsigned int IDartcile, System::String^ NouveauNom, System::String^ NouvelleReference, System::String^ NouvelleCouleur, unsigned int NouveauSeuilReappro, unsigned int NouveauTauxTVA);
	System::Data::DataSet^ afficherArticle(unsigned int IDArticle, System::String^);
	System::Data::DataSet^ afficherTousArticles(System::String^);
	System::Data::DataSet^ afficherstat10sup(System::String^);
	System::Data::DataSet^ afficherstat10less(System::String^);
	System::Data::DataSet^ afficherCommande(System::String^);
	int afficheCA();
	int afficheValue();
	//int affichereturnID();

	CL_Services();
};


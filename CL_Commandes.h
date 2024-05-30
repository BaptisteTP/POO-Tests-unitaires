#pragma once

ref class CL_Commandes
{
private:
    unsigned int IDCommande;
    unsigned int IDclient;

    System::String^ nomClient;
    System::String^ prenomClient;

    System::String^ numSuivi;
    System::String^ dateLivraison;
    System::String^ dateEmission;
    System::String^ datePaiement;
    System::String^ dateCommande;
    System::String^ methodePaiement;
    double montant;

    System::String^ Article;
    int IdArticle;
    int Quantite;

public:

    System::String^ ajouterInCommande() ;
    System::String^ ajouterInPaiement();
    System::String^ ajouterInContenir();
    System::String^ supprimer() ;
    System::String^ modifier() ;
    System::String^ afficher() ;

    System::String^ supprimerArticle();
    System::String^ ajouterArticle();

    //Setters & Getters

    void setIdCommande(unsigned int idCommande) { this->IDCommande = idCommande; };
    void setIdClient(unsigned int idClient) { this->IDclient = idClient; };
    void setNomClient(System::String^ nomClient) { this->nomClient = nomClient; };
    void setPrenomClient(System::String^ prenomClient) { this->prenomClient = prenomClient; };
    void setNumSuivi(System::String^ nomClient, System::String^ prenomClient, System::String^ dateCommande, System::String^ villeLiv);
    void setDateLivraison(System::String^ dateLiv) { this->dateLivraison = dateLiv; };
    void setDateEmmision(System::String^ dateEm) { this->dateEmission = dateEm; };
    void setDatePaiement(System::String^ datePaiement) { this->datePaiement = datePaiement; };
    void setDateCommande(System::String^ dateCommande) { this->dateCommande = dateCommande; };
    void setMethPaiement(System::String^ methodePaiement) { this->methodePaiement = methodePaiement; };
    void setArticle(System::String^ Article) { this->Article = Article; };
    void setQuantite(int Quantite) { this->Quantite = Quantite; };
    void setMontant(double montant) { this->montant = montant; };
    void setIdArticle(unsigned int id) { this->IdArticle = id; };

    unsigned int getIdCommande() { return this->IDCommande; };
    unsigned int getIdClient() { return this->IDclient; };
    System::String^ getNomClient() { return this->nomClient; };
    System::String^ getPrenomClient() { return this->prenomClient; };
    System::String^ getNumSuivi() { return this->numSuivi; };
    System::String^ getDateLiv() { return this->dateLivraison; };
    System::String^ getDateEm() { return this->dateEmission; };
    System::String^ getDatePaiement() { return this->datePaiement; };
    System::String^ getDateCommande() { return this->dateCommande; };
    System::String^ getMethPaiement() { return this->methodePaiement; };
    double getMontant() { return this->montant; };
    System::String^ getArticle() { return this->Article; };
    int getIdArticle() { return this->IdArticle; };
    int getQuantite() { return this->Quantite; };


};


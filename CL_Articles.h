#pragma once

ref class CL_Articles
{
private:
    unsigned int id;

    System::String^ nom;
    System::String^ categorie;
    System::String^ couleur;
    System::String^ reference;
    int quantite;
    double prixAchat;

public:

    System::String^ doExist() ;
    System::String^ ajouter() ;
    System::String^ supprimer() ;
    System::String^ modifier() ;
    System::String^ afficher() ;
    System::String^ afficherTousArticles();

    //Setters & Getters
    void setId(unsigned int id) { this->id = id; };
    void setNom(System::String^ nom) { this->nom = nom; };
    void setCategorie(System::String^ categorie) { this->categorie = categorie; };
    void setCouleur(System::String^ couleur) { this->couleur = couleur; };
    void setReference(System::String^ reference) { this->reference = reference; };
    void setQuantite(int quantite) { this->quantite = quantite; };
    void setPrixAchat(double prixAchat) { this->prixAchat = prixAchat; };

    unsigned int getId() { return this->id; };
    System::String^ getNom() { return this->nom; };
    System::String^ getCategorie() { return this->categorie; };
    System::String^ getCouleur() { return this->couleur; };
    System::String^ getReference() { return this->reference; };
    int getQuantite() { return this->quantite; };
    double getPrixAchat() { return this->prixAchat; };
};


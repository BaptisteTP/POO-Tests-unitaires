#pragma once

ref class CL_Clients
{
private:
    unsigned int IDclient;

    System::String^ nom;
    System::String^ prenom;

    System::String^ AdrFacturaction;
    System::String^ AdrLivraison;
    System::String^ dateAnniv;
    System::String^ email;
    System::String^ telephone;

public:

    System::String^ doExist();
    System::String^ ajouter() ;
    System::String^ supprimer() ;
    System::String^ modifier() ;
    System::String^ afficher() ;

    System::String^ ajouterAdresseFac();
    System::String^ ajouterAdresseLiv();

    System::String^ supprimerAdresseLiv();
    System::String^ supprimerAdresseFac();

    //Setters & Getters

    void setId(unsigned int id) { this->IDclient = id; };
    void setNom(System::String^ nom) { this->nom = nom; };
    void setPrenom(System::String^ prenom) { this->prenom = prenom; };
    void setAdrFac(System::String^ adrFac) { this->AdrFacturaction = adrFac; };
    void setAdrLiv(System::String^ adrLiv) { this->AdrLivraison = adrLiv; };
    void setDateAniv(System::String^ dateAniv) { this->dateAnniv = dateAniv; };
    void setEmail(System::String^ email) { this->email = email; };
    void setTelephone(System::String^ telephone) { this->telephone = telephone; };

    unsigned int getId() { return this->IDclient; };
    System::String^ getNom() { return this->nom; };
    System::String^ getPrenom() { return this->prenom; };
    System::String^ getAdrFac() { return this->AdrFacturaction; };
    System::String^ getAdrLiv() { return this->AdrLivraison; };
    System::String^ getDateAniv() { return this->dateAnniv; };
    System::String^ getEmail() { return this->email; };
    System::String^ getTelephone() { return this->telephone; };

};


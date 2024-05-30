#include "CL_Commandes.h"

System::String^ CL_Commandes::ajouterInCommande()
{
    return "INSERT INTO Commande (date_commande, date_livraison, num_suivi, ID_Client) VALUES ('" + System::Convert::ToDateTime(this->getDateCommande()) + "', '" + System::Convert::ToDateTime(this->getDateLiv())
        + "', '" + this->getNumSuivi() + "','" + this->getIdClient() + "');";
}

System::String^ CL_Commandes::ajouterInPaiement()
{
    return "INSERT INTO paiement (type, montant, date_paiement, ID_commande) VALUES ('" + this->getMethPaiement()
        + "', '" + this->getMontant() + "', '" + System::Convert::ToDateTime(this->getDatePaiement()) + "', '" + this->getIdCommande() + "');";
}

System::String^ CL_Commandes::ajouterInContenir()
{
    System::String^  sqlCommande = "INSERT INTO Contenir (ID_article, ID_commande, quantité) VALUES ('" + this->getIdArticle()
        + "', '" + this->getIdCommande() + "', '" + this->getQuantite() + "');";
    
    return sqlCommande;
}

System::String^ CL_Commandes::supprimer()
{
    System::String^ sqlCoCommande = "DELETE FROM Commande WHERE ID_commande = '" + this->getIdCommande() + "';";
    System::String^ sqlCoPaiment = "DELETE FROM paiement WHERE ID_paiement = '" + this->getIdCommande() + "';";
    System::String^ sqlCoContenir = "DELETE FROM Contenir WHERE ID_commande = '" + this->getIdCommande() + "';";

    return sqlCoCommande + sqlCoPaiment + sqlCoContenir;
}

System::String^ CL_Commandes::modifier()
{
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

System::String^ CL_Commandes::afficher()
{
    return "SELECT t1.ID_commande, Client.nom, Client.prenom, t1.num_suivi, t1.date_commande, t1.date_livraison, t1.montant, t1.type, t1.date_paiement FROM(SELECT Paiement.date_paiement, Paiement.montant, Paiement.type, Commande.ID_client AS ID_client_sous_requete, Commande.ID_commande, Commande.num_suivi, Commande.date_commande, Commande.date_livraison FROM Commande INNER JOIN Paiement ON Commande.ID_commande = Paiement.ID_commande) AS t1 INNER JOIN Client ON t1.ID_client_sous_requete = Client.ID_client;";


}

System::String^ CL_Commandes::supprimerArticle()
{
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

System::String^ CL_Commandes::ajouterArticle()
{
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

void CL_Commandes::setNumSuivi(System::String^ nomClient, System::String^ prenomClient, System::String^ dateCommande, System::String^ villeLiv)
{
    this->numSuivi = nomClient->Substring(0, 2) + prenomClient->Substring(0, 2) + dateCommande->Substring(8, 10) + villeLiv->Substring(0, 2);
}

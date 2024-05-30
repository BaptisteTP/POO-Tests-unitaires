#include "CL_Clients.h"

System::String^ CL_Clients::doExist()
{
    return "SELECT COUNT(*) FROM client WHERE nom = '" + this->getNom() + "' and prenom = '" + this->getPrenom() + "';";
}

System::String^ CL_Clients::ajouter()
{
    return "INSERT INTO Client (nom, prenom, email, tel, date_naissance) VALUES ('" + this->getNom() + "', '" + this->getPrenom() + "', '" + this->getEmail() + "', '" + this->getTelephone() + "', '" + System::Convert::ToDateTime(this->getDateAniv()) + "');";
}

System::String^ CL_Clients::supprimer()
{
    return "DELETE FROM Client WHERE ID_client = '" + this->getId() + "';";
}

System::String^ CL_Clients::modifier()
{
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

System::String^ CL_Clients::afficher()
{
    return "SELECT * From Client";
    // TODO: insert return statement here
}

System::String^ CL_Clients::ajouterAdresseFac()
{
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

System::String^ CL_Clients::ajouterAdresseLiv()
{
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

System::String^ CL_Clients::supprimerAdresseLiv()
{
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

System::String^ CL_Clients::supprimerAdresseFac()
{
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

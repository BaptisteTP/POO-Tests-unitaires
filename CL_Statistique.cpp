#include "CL_Statistique.h"

System::String^ CL_Statistique::calculateAvgBasket()
{
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

System::String^ CL_Statistique::calculateRevenue(char month)
{
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

System::String^ CL_Statistique::calculateBuyAmont()
{
    throw gcnew System::NotImplementedException();
    //return "SELECT ID_personnel_1 AS ID_personnel FROM personnel WHERE ID_personnel = '"+ this->getId() + "';";
}

System::String^ CL_Statistique::top10BestSales()
{
    return "SELECT prenom FROM personnel;";
}

System::String^ CL_Statistique::top10WorstSales()
{
    return "SELECT prenom FROM Client;";
}

System::String^ CL_Statistique::calculateCommercialValue()
{
    return "SELECT COUNT(DISTINCT prenom) AS NombreDePrenoms FROM Client;";
}

System::String^ CL_Statistique::calculateBuyValue()
{
    return "SELECT COUNT(DISTINCT prenom) AS NbPrenom FROM Personnel;";
}

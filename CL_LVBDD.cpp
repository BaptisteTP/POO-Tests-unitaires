#include "CL_LVBDD.h"

CL_LVBDD::CL_LVBDD()
{
	this->Connectstring = "Data Source=DESKTOP-8DEF7LQ\\SQLSERVER;Initial Catalog=POO;Integrated Security=True;Encrypt=False;";
	this->sqlCommand = "Rien";

	this->connexionObject = gcnew System::Data::SqlClient::SqlConnection(this->Connectstring);
	this->commandObject = gcnew System::Data::SqlClient::SqlCommand(this->sqlCommand, this->connexionObject);
	this->dataAdapterObject = gcnew System::Data::SqlClient::SqlDataAdapter;
	this->datSetObject = gcnew System::Data::DataSet;

	this->commandObject->CommandType = System::Data::CommandType::Text;
}

void CL_LVBDD::actionOnRows(System::String^ CommandSQL)
{
	this->sqlCommand = CommandSQL;
	this->commandObject->CommandText = this->sqlCommand;
	this->dataAdapterObject->SelectCommand = this->commandObject;

	this->connexionObject->Open();
	this->commandObject->ExecuteNonQuery();
	this->connexionObject->Close();
}

System::Data::DataSet^ CL_LVBDD::getRows(System::String^ commandSQL, System::String^ sDataTableName)
{
	this->datSetObject->Clear();
	this->sqlCommand = commandSQL;
	this->commandObject->CommandText = this->sqlCommand;
	this->dataAdapterObject->SelectCommand = this->commandObject;
	this->dataAdapterObject->Fill(this->datSetObject, sDataTableName);

	return this->datSetObject;
}

int CL_LVBDD::actionOnRowsNB(System::String^ CommandSQL)
{
	int nbElemn;
	this->sqlCommand = CommandSQL;
	this->commandObject->CommandText = this->sqlCommand;

	this->connexionObject->Open();
	nbElemn = System::Convert::ToInt32(this->commandObject->ExecuteScalar());
	this->connexionObject->Close();
	return nbElemn;
}

double CL_LVBDD::actionOnRowsDouble(System::String^ CommandSQL)
{
	double nombre;
	this->sqlCommand = CommandSQL;
	this->commandObject->CommandText = this->sqlCommand;

	this->connexionObject->Open();
	nombre = System::Convert::ToDouble(this->commandObject->ExecuteScalar());
	this->connexionObject->Close();
	return nombre;
}

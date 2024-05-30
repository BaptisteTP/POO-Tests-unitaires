#pragma once
ref class CL_LVBDD
{
private:

	System::String^ Connectstring;
	System::String^ sqlCommand;

	System::Data::SqlClient::SqlConnection^ connexionObject;
	System::Data::SqlClient::SqlCommand^ commandObject;
	System::Data::SqlClient::SqlDataAdapter^ dataAdapterObject;
	System::Data::DataSet^ datSetObject;

public:
	CL_LVBDD();
	void actionOnRows(System::String^ CommandSQL);
	System::Data::DataSet^ getRows(System::String^ commandSQL, System::String^);
	int actionOnRowsNB(System::String^ CommandSQL);
	double actionOnRowsDouble(System::String^ CommandSQL);
};
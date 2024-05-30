#pragma once
ref class CL_Statistique
{
private:
	unsigned int id;

public:
	System::String^ calculateAvgBasket();
	System::String^ calculateRevenue(char month);
	System::String^ calculateBuyAmont();
	System::String^ top10BestSales();
	System::String^ top10WorstSales();
	System::String^ calculateCommercialValue();
	System::String^ calculateBuyValue();

	void setId(unsigned int id) { this->id = id; };

	unsigned int getId() { return this->id; };
};


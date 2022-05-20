//IT21250392 
//Deluxsun Christopher
//Metro Weekend
#include <iostream>
#include <string>
#include "FinanceEmployee.h"
using namespace std;

#define SIZE 1

#pragma once

class FinanceReport
{
protected:
	int financeReportId;
	string generatedBy;

private:
	FinanceEmployee* finEmply[SIZE];

public:
	FinanceReport(); // default constructor
	FinanceReport(int financeReportId , string generatedBy, FinanceEmployee* FinEmply1);  //overloaded constructor
	void StoreDetails(FinanceEmployee* FinEmply1);
	~FinanceReport(); // destructor

};

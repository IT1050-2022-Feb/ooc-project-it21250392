//IT21250392 
//Deluxsun Christopher
//Metro Weekend
#include "FinanceReport.h"
#include <iostream>
#include <iomanip>
#include <cstring>
#pragma once
FinanceReport::FinanceReport()
{
	financeReportId = 1000;
	generatedBy = "Admin";

	finEmply[0] = new FinanceEmployee();
}

FinanceReport::FinanceReport(int frId , string genBy, FinanceEmployee* FinEmply1) {
	financeReportId = frId;
	generatedBy = genBy;

	finEmply[0] = new FinanceEmployee(*FinEmply1);
}

void FinanceReport::StoreDetails(FinanceEmployee* FinEmply1) {
	
}


FinanceReport::~FinanceReport() {
	cout << "Employer Destructer Called" << endl;
}


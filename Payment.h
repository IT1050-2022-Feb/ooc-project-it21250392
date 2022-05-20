//IT21250392 
//Deluxsun Christopher
//Metro Weekend
#include <iostream>
#include <string>
using namespace std;

#pragma once

class Payment
{
protected:
	int paymentId;
	double paymentAmount;
	string paymentDate;
	string receivedBy;
	string receievedFrom;
	

public:
	Payment(); // default constructor
	Payment(int PaymentId , double payAmount , string payDate , string receivedBy, string receivedFrom);  //overloaded constructor
	void SetPaymentDetails();
	void GenerateId();
	void DisplayPaymentDetails();
	~Payment(); // destructor
};


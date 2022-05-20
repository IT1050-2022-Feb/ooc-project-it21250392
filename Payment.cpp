//IT21250392 
//Deluxsun Christopher
//Metro Weekend
#include "Payment.h"
#include <iostream>
#include <iomanip>
#include <cstring>
#pragma once
Payment::Payment()
{
	paymentId = 1000;
	paymentAmount = 5000;
	paymentDate = "11/11/2011";
	receivedBy = "Admin";
	receievedFrom = "Employer";
}

Payment::Payment(int payId , double payAmt, string payDate, string recBy, string recFrom) {
	paymentId = payId;
	paymentAmount = payAmt;
	paymentDate = payDate;
	receivedBy = recBy;
	receievedFrom = recFrom;

}

void Payment::SetPaymentDetails() {

}

void Payment::GenerateId() {

}

void Payment::DisplayPaymentDetails() {

}

Payment::~Payment() {
	cout << "Employer Destructer Called" << endl;
}
//IT21250392 
//Deluxsun Christopher
//Metro Weekend
#include "Admin.h"
#include <iostream>
#include <iomanip>
#include <cstring>
#pragma once
Admin::Admin()
{
	adminId = 1000;
}

Admin::Admin(int adId) {
	adminId = adId;
}

void Admin::Addjobs() {

}

void Admin::DeleteJobs() {

}

void Admin::ChangeUserStatus() {

}

void Admin::UpdatePaymentDetails() {

}

Admin::~Admin() {
	cout << "Employer Destructer Called" << endl;
}


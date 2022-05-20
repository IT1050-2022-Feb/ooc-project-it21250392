//IT21250392 
//Deluxsun Christopher
//Metro Weekend
#include <iostream>
#include <string>
#include <cstdio>
#include "Job.h"
using namespace std;

#pragma once

#define SIZE 1

class Admin
{
protected:
	int adminId;

	Job* job[SIZE];

public:
	Admin();
	Admin(int adminId);
	void Addjobs();
	void DeleteJobs();
	void ChangeUserStatus();
	void UpdatePaymentDetails();

	~Admin();
};
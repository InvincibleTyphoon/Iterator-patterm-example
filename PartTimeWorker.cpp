#include "PartTimeWorker.h"

PartTimeWorker::PartTimeWorker(const string firstName, const string lastName, const int age, const Gender gender)
{
	this->firstName = string(firstName);
	this->lastName = string(lastName);
	this->age = age;
	this->gender = gender;
}

PartTimeWorker::PartTimeWorker(const PartTimeWorker& other)
{	
	this->firstName = string(other.firstName);
	this->lastName = string(other.lastName);
	this->age = other.age;
	this->gender = other.gender;
}

string PartTimeWorker::toString()
{
	string genderString;
	if (gender == male)
		genderString = "male";
	else
		genderString = "female";
	return string(firstName + " " + lastName + "/" + to_string(age) + "/" + genderString + "\n");
}
#pragma once
#include <string>
#include "ToStringAble.h"
#define Gender bool
#define male true
#define female false

using namespace std;

class PartTimeWorker : public ToStringAble
{
public:
	PartTimeWorker(const string firstName, const string lastName, const int age, const Gender gender);
	PartTimeWorker(const PartTimeWorker& other);
	string toString();

private:
	string firstName;
	string lastName;
	int age;
	Gender gender;
};
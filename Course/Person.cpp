#include "Person.h"
#include <string>
using namespace std;

// Constructor,�غc�l,�غc���

//Person(const string& id, const string& lastName, const string& firstName, const string& gender, const string& birthDate)
{
	this->id = id;
	this->lastName = lastName;
	this->firstName = firstName;
	this->lastName = lastName;
	this->birthDate = birthDate;
}

string Person::getId() const
{
	return id;
}

string Person::getLastName() const
{
	return lastName;
}

string Person::getFirstName() const
{
	return firstName;
}

string Person::getGender() const
{
	return gender;
}

string Person::getBirthDate() const
{
	return birthDate;
}
void Person::setId(const string& id)
{
	this->id=id
}
void Person::setLastName(const string& lastName)
{
}
void Person::setFirstName(const string& firstName)
{
}
void Person::setgender(const string& gender)
{
}
void Person::setBirthDate(const string& birthDate)
{
}
void
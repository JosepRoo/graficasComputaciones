#include "Employee.h"


Employee::Employee(int id, std::string firstName, std::string lastName, int salary) {
	_id = id;
	_firstName = firstName;
	_lastName = lastName;
	_salary = salary;
}

int Employee::GetID() {
	return _id;
}

std::string Employee::GetFirstName() {
	return _firstName;
}

std::string Employee::GetLastName() {
	return _lastName;
}
std::string Employee::GetName() {
	return _firstName + " " + _lastName;
}
int Employee::GetSalary() {
	return _salary;
}

void Employee::SetSalary(int salary) {
	_salary = salary;
}
int Employee::GetAnnualSalary() {
	return _salary * 12;
}
int Employee::RaiseSalary(int percent) {
	_salary = _salary + ((_salary * (percent / 100)));
	return _salary;
}
std::string Employee::Print() {
	return "Employee[" + std::to_string(_id) + ", " + _firstName + " " + _lastName + ", " + std::to_string(_salary) + "]";
}
#include <iostream>
#include <string>
#include "EmployeeManager.h"

//Set First Name
void EmployeeManager::setFirstName(std::string firstName){
	strcpy(firstName, EmployeeManager::firstName);
}

//Set Last Name
void EmployeeManager::setLastName(std::string lastName){
	strcpy(lastName, EmployeeManager::lastName);
}

//Set Employee Number
void EmployeeManager::setEmployeeNum(std::string employeeNum){
	strcpy(employeeNum, EmployeeManager::employeeNum);
}

//Set Position
void EmployeeManager::setPosition(std::string position){
	strcpy(position, EmployeeManager::position);
}

//Set Shift
void EmployeeManager::setShift(std::string shift){
	strcpy(shift, EmployeeManager::shift);
}

//Set Wage
void EmployeeManager::setWage(double wage){EmployeeManager::wage = wage;}

//Set Hours
void EmployeeManager::setHours(double hours){EmployeeManager::hours = hours;}

//Get First Name
void EmployeeManager::getFirstName(){std::cout << EmployeeManager::firstName};

//Get Last Name
void EmployeeManager::getLastName(){std::cout << EmployeeManager::lastName};

//Get Employee Number
void EmployeeManager::getEmployeeNum(){std::cout << EmployeeManager::EmployeeNum};

//Get Position
void EmployeeManager::getPosition(){std::cout << EmployeeManager::position};

//Get Shift
void EmployeeManager::getShift(){std::cout << EmployeeManager::shift};

//Get Wage
void EmployeeManager::getWage(){std::cout << EmployeeManager::wage};

//Get Hours
void EmployeeManager::getHours(){std::cout << EmployeeManager::hours};
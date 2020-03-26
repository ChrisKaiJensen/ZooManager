#include <iostream>
#include <string>
#include "CustomerManager.h"

//Set First Name
void CustomerManager::setFirstName(std::string firstName){
	strcpy(firstName, CustomerManager::firstName);
}

//Set Last Name
void CustomerManager::setLastName(std::string lastName){
	strcpy(lastName, CustomerManager::lastName);
}

//Set Number of Visits
void CustomerManager::setNumVisits(int numVisits){CustomerManager::numVisits = numVisits;}

//Set Preferred Customer True/False
void CustomerManager::setHours(bool prefCustomer){CustomerManager::prefCustomer = prefCustomer;}

//Get First Name
std::string CustomerManager::getFirstName(){return CustomerManager::firstName};

//Get Last Name
std::string CustomerManager::getLastName(){return CustomerManager::lastName};

//Get Number of Visits
int CustomerManager::getNumVisits(){return CustomerManager::numVisits};

//Get Hours
bool CustomerManager::getPrefCustomer(){return CustomerManager::prefCustomer};
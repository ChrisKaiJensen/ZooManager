#include <iostream>
#include <string>
#include "AnimalManager.h"

//Set Species
void AnimalManager::setSpecies(std::string species){
	strcpy(firstName, AnimalManager::species);
}

//Set Section
void AnimalManager::setSection(std::string section){
	strcpy(section, AnimalManager::section);
}

//Set Cage
void AnimalManager::Cage(std::string cage){
	strcpy(cage, AnimalManager::cage);
}

//Set Handler Number
void AnimalManager::setHandlerNum(std::string handlerNum){
	strcpy(handlerNum, AnimalManager::handlerNum);
}

//Set Name
void AnimalManager::setName(std::string name){
	strcpy(name, AnimalManager::name);
}


//Set Age in Months
void AnimalManager::setWage(int age){AnimalManager::age = age;}

//Set How Many Months at Zoo
void AnimalManager::setMonthsAtZoo(int monthsAtZoo){
AnimalManager::monthsAtZoo = monthsAtZoo;
}

//Get Species
std::string AnimalManager::getSpecies(){return AnimalManager::species};

//Get Section
std::string AnimalManager::getSection(){return AnimalManager::section};

//Get Handler Number
std::string AnimalManager::getHandlerNum(){return AnimalManager::handlerNum};

//Get Name
std::string AnimalManager::getName(){return AnimalManager::name};

//Get Cage
std::string AnimalManager::getCage(){return AnimalManager::cage};

//Get Age in Months
int AnimalManager::getAge(){return AnimalManager::age};

//Get How Many Months at Zoo
int AnimalManager::getMonthsAtZoo(){return AnimalManager::monthsAtZoo};
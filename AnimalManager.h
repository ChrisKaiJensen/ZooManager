#include <iostream>
#include <string>

class AnimalManager{
	Private:
		std::string species, section, cage, handlerNum, name;
		int age, monthsAtZoo;

	Public:
		//Set Functions
		void setSpecies (std::string species);
		void setSection (std::string section);
		void setCage (std::string cage);
		void setHandler (std::string handlerNum);
		void setName (std::string name);
		void setAge (int age);
		void setMonthsAtZoo (int monthsAtZoo);

		//Get Functions
		std::string getSpecies ();
		std::string getSection ();
		std::string getCage ();
		std::string getHandler ();
		std::string name ();
		int getAge ();
		int getMonthsAtZoo ();
}
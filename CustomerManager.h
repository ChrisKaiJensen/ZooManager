#include <iostream>
#include <string>

class CustomerManager{
	Private:
		std::string firstName, lastName;
		int numVisits;
		bool prefCustomer;

	Public:
		//Set Functions
		void setFirstName (std::string firstName);
		void setLastName (std::string lastName);
		void setNumVisits (int numVisits);
		void set prefCustomer (bool prefCustomer);

		//Get Functions
		std::string getFirstName ();
		std::string getLastName ();
		int getNumVisits ();
		bool getPrefCustomer ();
}
#include <iostream>
#include <string>

class EmployeeManager{
	Private:
		std::string firstName, lastName, position, shift, employeeNum;
		double wage;

	Public:
		//Set Functions
		void setFirstName (std::string firstName);
		void setLastName (std::string lastName);
		void setEmployeeNum (std::string employeeNum);
		void setPosition (std::string position);
		void setShift (std::string shift);
		void setWage (double wage);
		void setHours (int hours);

		//Get Functions
		void getLastName();
		void getPosition();
		void getShift();
		void getWage ();
		void getHours();
}
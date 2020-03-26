#include <iostream>
#include <string>
#include "EmployeeManager.h"
#include "AnimalManager.h"
#include "CustomerManager.h"

/*
Zoo Manager Program
Christopher Kai Jensen
Software Development 2
3/25/2020
*/

int main ()
{
	//Main Variables
	int selection;

	//Employee Variables
	std::string empFirstName, empLastName, position, shift, employeeNum;
	double wage, hours;

	//Animal Variables
	std::string species, section, cage, handlerNum, animalName;
	int age, monthsAtZoo;

	//Customer Variables
	std::string custFirstName, custLastName;
	int numVisits;
	bool prefCustomer;

	//User introduction and prompt
	std::cout << "Welcome to the Zoo Manager. This program is used to input data for employees,"
		<< " customers, and animals. Please input the number correlating to which type" 
		<< " you are updating." << std::endl << "1 for Employees" << std::endl 
		<< "2 for Animals" << std::endl << "3 for Customers" << std::endl << "-1 to Quit";
	std::cin >> selection;

	//Conditional procedure through manager
	while (selection != -1){
		//Switch to select object type
		switch(selection){
			case 1:
				//Instantiate employee object
				EmployeeManager newEmployee;

				//Prompt user for employee information 
				std::cout << "Welcome to Employee Manager. Please enter the employee's first name,"
					<< " last name, position, shift, employee number, wage, and how many"
					<< hours they will work per week.";
				std::cin >> empFirstName >> empLastName >> position >> shift >> employeeNum >> wage
					>> hours;

				//Call enployee instance methods
				newEmployee.setFirstName(empFirstName);
				newEmployee.setLastName(empLastName);
				newEmployee.setEmployeeNum(employeeNum);
				newEmployee.setPosition(position);
				newEmployee.setShift(shift);
				newEmployee.setWage(wage);
				newEmployee.setHours(hours);
				
				//Relay input back for verification
				std::cout << "To confirm:" << std::endl << "First Name: " << newEmployee.getFirstName() 
					<< std::endl << "Last Name: " << newEmployee.getLastName() << std::endl
					<< "Employee Number: " << newEmployee.getEmployeeNum() << std::endl
					<< "Position: " << newEmployee.getPosition() << std::endl << "Shift: "
					<< newEmployee.getShift() << std::endl << "Wage: $" << newEmployee.getWage()
					<< std:endl << "Hours: " << newEmployee.getHours();
		}
	}
}
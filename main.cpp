#include <iostream>
#include <iomanip>
//Creating a basics budget calculator asking the user for 5 items 
/*
* Income from User
* Water Bill
* Electricity Bill
* Rent 
* Cellphone 
* Internet 
*/
// The main function will calculate the remaing amount and output in a nice format for the user!
int main()
{
	float income, water_bill, electricity_bill, rent, cellphone, internet;
	int col_with{ 20 };

	std::cout << "Welcome to Your Budget Calculator" << std::endl;
	std::cout << "=================================" << std::endl;
	std::cout << std::endl;
	std::cout << "What is your Income for the Month? ";
	std::cin >> income;
	std::cout << "=================================" << std::endl;
	std::cout << "\nWhat is your Water Bill for the Month? ";
	std::cin >> water_bill;
	std::cout << "=================================" << std::endl;
	std::cout << "\nWhat is your Electricity Bill for the Month? ";
	std::cin >> electricity_bill;
	std::cout << "=================================" << std::endl;
	std::cout << "\nWhat is the Rent for the Month? ";
	std::cin >> rent;
	std::cout << "=================================" << std::endl;
	std::cout << "\nWhat is the Cellphone bill for the Month? ";
	std::cin >> cellphone;
	std::cout << "=================================" << std::endl;
	std::cout << "\nWhat is the Internet bill for the Month? ";
	std::cin >> internet;
	std::cout << std::endl;
	std::cout << std::setw(col_with * 2) << "Budget" <<  std::endl;
	std::left;
	std::cout << std::setw(col_with) << "Income: " << income << std::endl;
	std::cout << std::setw(col_with) << "Water Bill: " << water_bill << std::endl;
	std::cout << std::setw(col_with) << "Electricity Bill: " << electricity_bill << std::endl;
	std::cout << std::setw(col_with) << "Rent Bill: " << rent << std::endl;
	std::cout << std::setw(col_with) << "CellPhone Bill: " << cellphone << std::endl;
	std::cout << std::setw(col_with) << "Internet Bill: " << internet << std::endl;
	float remaining{ income - water_bill - electricity_bill - rent - cellphone - internet };
	std::cout << std::setw(col_with) << "Remaining Balance: " << remaining;

	
	
	return 0;
}
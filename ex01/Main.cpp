/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 10:58:20 by adprzyby          #+#    #+#             */
/*   Updated: 2024/09/07 11:04:12 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int checkIfCommand(std::string word, PhoneBook phonebook)
{
	if (word == "ADD")
	{
		// std::cout << "Adding\n";
		phonebook.addContact();
		return (1);
	}
	else if (word == "SEARCH")
	{
		// std::cout << "Searching... \n";
		phonebook.searchContact();
		return (1);
	}
	else if (word == "EXIT")
	{
		// std::cout << "Exiting ... \n";
		phonebook.exitProgram();
		return (0);
	}
	else
		return (-1);
}

int main(void)
{
	PhoneBook phonebook;
	std::string input;
	int isCommand = 0;
	std::cout << "Welcome to myPhoneBook! Please enter one of the following commands: \n"
			  << "ADD - save a new contact\n" 
			  << "SEARCH - display a specific contact\n" 
			  << "EXIT - exit the program and delete all contacts" << std::endl;

	while (std::getline(std::cin, input))
	{
		isCommand = checkIfCommand(input, phonebook);
		if (isCommand == -1)
			std::cout << "Command not found, please try again" << std::endl;
		if (isCommand == 0)
			return (0);
	}
	

	return (0);
}

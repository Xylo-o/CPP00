/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 10:58:20 by adprzyby          #+#    #+#             */
/*   Updated: 2024/09/04 11:54:35 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int checkIfCommand(std::string word)
{
	if (word == "ADD")
	{
		std::cout << "Adding\n";
		return (1);
	}
	else if (word == "SEARCH")
	{
		std::cout << "Searching... \n";
		return (1);
	}
	else if (word == "EXIT")
	{
		std::cout << "Exiting ... \n";
		return (0);
	}
	else
		return (-1);
}

int main(void)
{
	std::string input;
	int isCommand = 0;
	std::cout << "Welcome to myPhoneBook! Please enter one of the following commands: \n"
			  << "ADD - save a new contact\n" 
			  << "SEARCH - display a specific contact\n" 
			  << "EXIT - exit the program and delete all contacts" << std::endl;

	while (std::getline(std::cin, input))
	{
		isCommand = checkIfCommand(input);
		if (isCommand == -1)
			std::cout << "Command not found, please try again" << std::endl;
		if (isCommand == 0)
			return (0);
	}
	

	return (0);
}

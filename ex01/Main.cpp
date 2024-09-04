/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 10:58:20 by adprzyby          #+#    #+#             */
/*   Updated: 2024/09/04 11:25:37 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void checkIfCommand(std::string word)
{
	
}

int main(void)
{
	std::string command;

	std::cout << "Welcome to myPhoneBook! Please enter one of the following commands: \n"
			  << "ADD - save a new contact\n" 
			  << "SEARCH - display a specific contact\n" 
			  << "EXIT - exit the program" << std::endl;
	
	std::getline(std::cin, command);
	
	if (command == "ADD")
	{
		
	}
	else if (command == "SEARCH")
	{
		
	}
	else if (command == "EXIT")
	{

	}
	else
		std::cout << "Command not found, please try again" << std::endl;
	return (0);
}

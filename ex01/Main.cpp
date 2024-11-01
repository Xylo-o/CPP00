/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 10:58:20 by adprzyby          #+#    #+#             */
/*   Updated: 2024/10/31 16:49:47 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void signalHandler(int signal) {
	if (signal == SIGINT) {
		std::cout << "\nExiting..." << std::endl;
		exit(0);
	}
}

int main(void) {
	std::signal(SIGINT, signalHandler);
	PhoneBook phonebook;
	std::string input;
	std::cout << "Welcome to myPhoneBook! Please enter one of the following commands: " << std::endl;
	while (true)
	{
		phonebook.displayPrompt();
		std::getline(std::cin, input);
		if (std::cin.eof()) {
			std::cout << "\nExiting..." << std::endl;
			break;
		}
		if (input == "ADD") {
			phonebook.addContact(phonebook);
		}
		else if (input == "SEARCH") {
			phonebook.displaySearchTable(phonebook);
			std::cout << "Enter an index of a contact to view or EXIT to go back: " << std::endl;
			std::getline(std::cin, input);
			if (input == "EXIT") {
				std::cout << std::endl;
				continue ;
			}
			while (!phonebook.isNumber(input) || input.empty()) {
				std::cout << "Invalid input. Please enter a numeric index or EXIT to go back: " << std::endl;
				std::getline(std::cin, input);
				if (input == "EXIT") {
					std::cout << std::endl;
					break ;
				}
			}
			if (phonebook.isNumber(input)) {
				int idx = std::stoi(input);
				if ((idx > 0 && idx <= 8) && (idx <= phonebook.index)) {
					phonebook.displayContact(phonebook, idx);
					continue;
				}
				else {
					std::cout << "Index out of range. Please enter a valid index.\n" << std::endl;
				}
			}
		}
		else if (input == "EXIT") {
			phonebook.exitProgram();
			return (0);
		}
		else
			std::cout << "Command not found. Please try again.\n" << std::endl;
	}
	return (0);
}

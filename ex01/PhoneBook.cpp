/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:35:58 by adprzyby          #+#    #+#             */
/*   Updated: 2024/09/09 13:54:06 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int PhoneBook::index = 0;

std::string PhoneBook::getInput(const std::string &prompt) {
	std::string input;
	do {
		std::cout << prompt << std::endl;
		std::getline(std::cin, input);
		if (input.empty()) {
			std::cout << "The field cannot be empty." << std::endl;
		}
	} while (input.empty());
	return input;
}

void PhoneBook::addContact(PhoneBook &phoneBook) {
	Contact newContact;
	newContact.setFirstName(getInput("First name: "));
	newContact.setLastName(getInput("Last name: "));
	newContact.setNickname(getInput("Nickname: "));
	newContact.setPhoneNumber(getInput("Phone number: "));
	newContact.setSecret(getInput("*Your darkest secret*: "));
	phoneBook.contacts[phoneBook.index] = newContact;
	phoneBook.index++;
	std::cout << "New contact successfully added!" << std::endl;
}

void PhoneBook::searchContact(PhoneBook &phoneBook) {
	int i;
	std::cout << "*====================================================================*" << std::endl;
	for (i = 0; i < phoneBook.index ; i++) {
		std::cout << (i + 1) << "|" 
		<< phoneBook.contacts[i].getFirstName() << "|" 
		<< phoneBook.contacts[i].getLastName() << "|" 
		<< phoneBook.contacts[i].getNickname() << std::endl;
	}
	std::cout << "*====================================================================*" << std::endl;
	
	// i = 0;
	// while () {
		
	// }
}
void PhoneBook::exitProgram(void) {
	std::cout << "Exiting..." << std::endl;
}

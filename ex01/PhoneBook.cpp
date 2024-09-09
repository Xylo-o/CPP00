/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:35:58 by adprzyby          #+#    #+#             */
/*   Updated: 2024/09/09 11:46:49 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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
	static int i;
	i = 0;
	Contact newContact;
	newContact.setFirstName(getInput("First name: "));
	newContact.setLastName(getInput("Last name: "));
	newContact.setNickname(getInput("Nickname: "));
	newContact.setPhoneNumber(getInput("Phone number: "));
	newContact.setSecret(getInput("*Your darkest secret*: "));
	phoneBook.contacts[i] = newContact;
	newContact.index = i++;
	std::cout << "New contact successfully added!" << std::endl;
}

void PhoneBook::searchContact(void)
{
	std::cout << "Searching..." << std::endl;
}
void PhoneBook::exitProgram(void) {
	std::cout << "Exiting..." << std::endl;
}

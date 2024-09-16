/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:35:58 by adprzyby          #+#    #+#             */
/*   Updated: 2024/09/16 15:30:59 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int PhoneBook::index = 1;

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
	if (phoneBook.index == 9) {
		for (int i = 0; i < 8; i++) {
			phoneBook.contacts[i] = phoneBook.contacts[i + 1];
		}
		phoneBook.contacts[7] = newContact;
	}
	else {
		phoneBook.contacts[phoneBook.index - 1] = newContact;
		phoneBook.index++;
	}
	std::cout << "New contact successfully added!" << std::endl;
}

std::string formatField(const std::string &text) {
    if (text.length() > 10) {
        return text.substr(0, 9) + ".";
    }
	else
        return text;
}

bool PhoneBook::isNumber(std::string str) {
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] >= '1' && str[i] <= '9')
			i++;
		else
			return (false);
	}
	return (true);
}

void PhoneBook::displayPrompt() {
	std::cout << "ADD - save a new contact\n" 
			  << "SEARCH - display a specific contact\n" 
			  << "EXIT - exit the program and delete all contacts" << std::endl;
}

void PhoneBook::displaySearchTable(PhoneBook &phoneBook) {
	std::cout << "*===============================================*" << std::endl;
	std::cout << std::right << std::setw(10) << "Index" << "|" 
        << std::setw(10) << "First name" << "|" 
        << std::setw(10) << "Last name" << "|" 
        << std::setw(10) << "Nickname" << std::endl;
    for (int i = 1; i < phoneBook.index ; i++) {
        std::cout << std::right << std::setw(10) << i << "|" 
        << std::setw(10) << formatField(phoneBook.contacts[i - 1].getFirstName()) << "|" 
        << std::setw(10) << formatField(phoneBook.contacts[i - 1].getLastName()) << "|" 
        << std::setw(10) << formatField(phoneBook.contacts[i - 1].getNickname()) << std::endl;
    }
    std::cout << "*===============================================*" << std::endl;
}

void PhoneBook::displayContact(PhoneBook &phoneBook, int idx) {
    std::cout << "First name: " << phoneBook.contacts[idx].getFirstName() << std::endl; 
    std::cout << "Last name: " << phoneBook.contacts[idx].getLastName() << std::endl;
    std::cout << "Nickname: " << phoneBook.contacts[idx].getNickname() << std::endl;
    std::cout << "Phone number: " << phoneBook.contacts[idx].getPhoneNumber() << std::endl;
    std::cout << "*Dark secret*: " << phoneBook.contacts[idx].getSecret() << std::endl;
	std::cout << std::endl;
}

void PhoneBook::exitProgram(void) {
	std::cout << "Exiting..." << std::endl;
}

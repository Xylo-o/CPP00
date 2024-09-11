/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:35:58 by adprzyby          #+#    #+#             */
/*   Updated: 2024/09/11 08:57:41 by adprzyby         ###   ########.fr       */
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

std::string formatField(const std::string &text) {
    if (text.length() > 10) {
        return text.substr(0, 9) + ".";
    }
	else
        return text;
}

bool isNumber(std::string str) {
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] >= '1' && str[i] <= '9')
			i++;
		else
			return (false);
	}
	return (true);
}

void displaySearchTable(PhoneBook &phoneBook) {
	std::cout << "*===============================================*" << std::endl;
	std::cout << std::right << std::setw(10) << "Index" << "|" 
        << std::setw(10) << "First name" << "|" 
        << std::setw(10) << "Last name" << "|" 
        << std::setw(10) << "Nickname" << std::endl;
    for (int i = 0; i < phoneBook.index ; i++) {
        std::cout << std::right << std::setw(10) << (i + 1) << "|" 
        << std::setw(10) << formatField(phoneBook.contacts[i].getFirstName()) << "|" 
        << std::setw(10) << formatField(phoneBook.contacts[i].getLastName()) << "|" 
        << std::setw(10) << formatField(phoneBook.contacts[i].getNickname()) << std::endl;
    }
    std::cout << "*===============================================*" << std::endl;
}

void displayContact(PhoneBook &phoneBook) {
	std::cout << "*===============================================*" << std::endl;
	std::cout << std::right << std::setw(10) << "Index" << "|" 
        << std::setw(10) << "First name" << "|" 
        << std::setw(10) << "Last name" << "|"
		<< std::setw(10) << "Nickname" << "|"
		<< std::setw(10) << "Phone number" << "|"
		<< std::setw(10) << "*Dark secret*" << std::endl;
    for (int i = 0; i < phoneBook.index ; i++) {
        std::cout << std::right << std::setw(10) << (i + 1) << "|" 
        << std::setw(10) << formatField(phoneBook.contacts[i].getFirstName()) << "|" 
        << std::setw(10) << formatField(phoneBook.contacts[i].getLastName()) << "|"
        << std::setw(10) << formatField(phoneBook.contacts[i].getNickname()) << "|"
        << std::setw(10) << formatField(phoneBook.contacts[i].getPhoneNumber()) << "|"
        << std::setw(10) << formatField(phoneBook.contacts[i].getSecret()) << std::endl;
    }
    std::cout << "*===============================================*" << std::endl;
}

void PhoneBook::searchContact(PhoneBook &phoneBook) {
    int i;
	std::string index;
	displaySearchTable(phoneBook);
	while (index.empty()) {
		std::cout << "Enter the index of the contact to view: " << std::endl;
		std::cin >> index;
		if (!isNumber(index)) {
			std::cout << "Invalid input. Please enter a numeric index." << std::endl;
			continue;
		}
		else {
			int idx = std::stoi(index);
			if (idx > 0 && idx <= 8) {
				break;
			}
			else {
				std::cout << "Index out of range. Please enter a valid index." << std::endl;
			}
		}
	}
	displayContact(phoneBook);
}

void PhoneBook::exitProgram(void) {
	std::cout << "Exiting..." << std::endl;
}

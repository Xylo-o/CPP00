/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:35:58 by adprzyby          #+#    #+#             */
/*   Updated: 2024/09/07 12:04:32 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::addContact(void)
{
	std::cout << "First name: " << std::endl;
	std::getline(std::cin, firstName);
	while (firstName.empty()) {
		std::cout << "The field cannot be empty" << std::endl;
		std::cout << "First name: " << std::endl;
		std::getline(std::cin, firstName);
	}
	std::cout << "Second name: " << std::endl;
	std::getline(std::cin, secondName);
	while (secondName.empty()) {
		std::cout << "The field cannot be empty" << std::endl;
		std::cout << "Second name: " << std::endl;
		std::getline(std::cin, secondName);
	}
	std::cout << "Nickname: " << std::endl;
	std::getline(std::cin, nickname);
	while (secondName.empty()) {
		std::cout << "The field cannot be empty" << std::endl;
		std::cout << "Nickname: " << std::endl;
		std::getline(std::cin, nickname);
	}
	std::cout << "Phone number: " << std::endl;
	std::getline(std::cin, phoneNumber);
	while (phoneNumber.empty()) {
		std::cout << "The field cannot be empty" << std::endl;
		std::cout << "Phone number: " << std::endl;
		std::getline(std::cin, phoneNumber);
	}
	std::cout << "*Darkest secret*: " << std::endl;
	std::getline(std::cin, secret);
	while (secret.empty()) {
		std::cout << "The field cannot be empty" << std::endl;
		std::cout << "*Darkest secret*: " << std::endl;
		std::getline(std::cin, secret);
	}
	std::cout << "Contact successfully added!" << std::endl;
}
void PhoneBook::searchContact(void)
{
	std::cout << "Searching..." << std::endl;
}
void PhoneBook::exitProgram(void)
{
	std::cout << "Exiting..." << std::endl;
}

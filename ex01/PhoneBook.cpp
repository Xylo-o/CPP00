/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:35:58 by adprzyby          #+#    #+#             */
/*   Updated: 2024/09/07 11:08:33 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::addContact(void)
{
	std::cout << "First name: " << std::endl;
	std::getline(std::cin, firstName);
	std::cout << "Second name: " << std::endl;
	std::getline(std::cin, secondName);
	std::cout << "Contact successfully added!" << std::endl;
	// std::getline(std::cin, number);
}
void PhoneBook::searchContact(void)
{
	std::cout << "Searching..." << std::endl;
}
void PhoneBook::exitProgram(void)
{
	std::cout << "Exiting..." << std::endl;
}

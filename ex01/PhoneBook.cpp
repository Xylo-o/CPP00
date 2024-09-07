/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:35:58 by adprzyby          #+#    #+#             */
/*   Updated: 2024/09/07 09:54:46 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

class PhoneBook
{
	int contacts[8];
	
};

void	addContact(void)
{
	std::string number;
	std::string name;
	std::string address;
	
	std::getline(std::cin, number);
	std::getline(std::cin, name);
	std::getline(std::cin, address);
}

void	searchContact(void)
{
		
}

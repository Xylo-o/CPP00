/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:35:58 by adprzyby          #+#    #+#             */
/*   Updated: 2024/09/04 12:20:37 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class PhoneBook
{
	int contacts[8];
	
};

void	addContact(void)
{
	int number;
	std::string name;
	std::string address;
	
	std::cin >> number;
	std::getline(std::cin, name);
	std::getline(std::cin, address);
}

void	searchContact(void)
{
		
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 09:40:34 by adprzyby          #+#    #+#             */
/*   Updated: 2024/09/16 11:37:15 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <vector>
#include <iostream>
#include <iomanip>
#include <cctype>
#include <algorithm>
#include <string>

class PhoneBook {
	public:
		static int index;
		Contact contacts [8];
		void addContact(PhoneBook &phonebook);
		// int searchContact(PhoneBook &phonebook);
		void exitProgram(void);
		bool isNumber(std::string str);
		void displayPrompt();
		void displaySearchTable(PhoneBook &phoneBook);
		void displayContact(PhoneBook &phoneBook, int idx);
		std::string getInput(const std::string &prompt);
};

#endif
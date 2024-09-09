/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 09:40:34 by adprzyby          #+#    #+#             */
/*   Updated: 2024/09/09 12:06:56 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <vector>
#include <iostream>
#include <string>

class PhoneBook {
	public:
		static int index;
		Contact contacts [8];
		void addContact(PhoneBook &phonebook);
		void searchContact(PhoneBook &phonebook);
		void exitProgram(void);
		
	private:
		std::string getInput(const std::string &prompt);
};

#endif
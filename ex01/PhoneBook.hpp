/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 09:40:34 by adprzyby          #+#    #+#             */
/*   Updated: 2024/09/07 12:02:49 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook {
	public:
		void addContact(void);
		void searchContact(void);
		void exitProgram(void);
		
		std::string firstName;
		std::string secondName;
		std::string nickname;
		std::string phoneNumber;
		std::string secret;
};

#endif
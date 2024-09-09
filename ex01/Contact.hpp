/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:50:34 by adprzyby          #+#    #+#             */
/*   Updated: 2024/09/09 11:39:50 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

class Contact {
public:
	int index;
	void setFirstName(std:: string firstName) {
		this->firstName = firstName;
	}
	void setLastName(std:: string lastName) {
		this->lastName = lastName;
	}
	void setNickname(std:: string nickname) {
		this->nickname = nickname;
	}
	void setPhoneNumber(std:: string phoneNumber) {
		this->phoneNumber = phoneNumber;
	}
	void setSecret(std:: string secret) {
		this->secret = secret;
	}
	std::string getFirstName() {
		return (firstName);
	}
	std::string getLastName() {
		return (lastName);
	}
	std::string getPhoneNumber() {
		return (phoneNumber);
	}
private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string secret;
};
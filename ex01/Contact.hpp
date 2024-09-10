/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:50:34 by adprzyby          #+#    #+#             */
/*   Updated: 2024/09/10 14:28:37 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

class Contact {
public:
	void setFirstName(std:: string firstName);

	void setLastName(std:: string lastName);

	void setNickname(std:: string nickname);

	void setPhoneNumber(std:: string phoneNumber);

	void setSecret(std:: string secret);

	std::string getFirstName();

	std::string getLastName();

	std::string getNickname();

	std::string getPhoneNumber();

	std::string getSecret();

private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string secret;
};
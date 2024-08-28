/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:22:27 by kali              #+#    #+#             */
/*   Updated: 2024/08/28 13:50:35 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "Invalid number of arguments" << std::endl;
        return (1);
    }
    char *str;
    str = argv[1];
    int i = 0;
    while (str[i])
    {
        if (str[i] > 96 && str[i] < 123)
        {
            str[i] -= 32;
        }
        i++;
    }
    std::cout << str << std::endl;
    return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:22:27 by kali              #+#    #+#             */
/*   Updated: 2024/08/28 16:17:13 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    print_str(char *str)
{
    int i = 0;
    while (str[i])
    {
        char c = str[i];
        if (c > 96 && c < 123)
            c -= 32;
        std::cout << c;
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    else if (argc < 2)
    {
        std::cout << "Invalid number of arguments" << std::endl;
        return (1);
    }
    int i = 1;
    while (i < argc)
    {
        print_str(argv[i]);
        std::cout << std::endl;
        i++;
    }
    return (0);
}

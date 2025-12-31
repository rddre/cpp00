/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaracut <asaracut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 01:46:59 by asaracut          #+#    #+#             */
/*   Updated: 2025/12/31 01:46:20 by asaracut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;

    j = 0;
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    while (argv[j])
    {
        i = -1;
        while (argv[j][i])
		{
            std::cout << (char)toupper(argv[j][i]);
			i++;
		}
		j++;
	}
    std::cout << std::endl;
	std::cout << "ewa fain a fou" << std::endl << "test test" << std::endl;
    return 0;
}

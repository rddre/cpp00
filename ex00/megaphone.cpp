/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaracut <asaracut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 01:46:59 by asaracut          #+#    #+#             */
/*   Updated: 2025/12/31 02:01:28 by asaracut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;

    j = 1;
	i = 0;
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    while (argv[j])
    {
        i = 0;
        while (argv[j][i])
		{
            std::cout << (char)toupper(argv[j][i]);
            i++;
        }
        j++;
		if (argv[j])
			std::cout << " ";
    }
    std::cout << std::endl;
    return 0;
}

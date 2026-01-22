/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaracut <asaracut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 02:05:45 by asaracut          #+#    #+#             */
/*   Updated: 2026/01/22 23:03:58 by asaracut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>  // Ajoute cet include en haut
#include "phonebook.hpp"
#include "contact.hpp"

void how_to_use()
{
	std::cout << std::endl;
	std::cout << "Available commands:" << std::endl;
	std::cout << "ADD    - Add a new contact" << std::endl;
	std::cout << "SEARCH - Search for a contact" << std::endl;
	std::cout << "EXIT   - Exit the program" << std::endl << std::endl;
}

void add_contact(PhoneBook& phoneBook)
{
	// Déclarer toutes les variables AVANT les boucles car j'ai eu un problème de portée
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
	bool ligne_remplie = false;

	std::cout << "insert contact details" << std::endl;
	while (!ligne_remplie)
	{
		std::cout << "first name ?" << std::endl;
		std::getline(std::cin, firstName);
		if (!firstName.empty())
		{
			ligne_remplie = true;
		}
		else
		{
			std::cout << "first name cannot be empty. please enter a valid first name." << std::endl;
		}
	}
	ligne_remplie = false;
	while (!ligne_remplie)
	{
		std::cout << "last name ?" << std::endl;
		std::getline(std::cin, lastName);
		if (!lastName.empty())
		{
			ligne_remplie = true;
		}
		else
		{
			std::cout << "last name cannot be empty. please enter a valid last name." << std::endl;
		}
	}
	ligne_remplie = false;
	while (!ligne_remplie)
	{
		std::cout << "nickname ?" << std::endl;
		std::getline(std::cin, nickname);
		if (!nickname.empty())
		{
			ligne_remplie = true;
		}
		else
		{
			std::cout << "nickname cannot be empty. please enter a valid nickname." << std::endl;
		}
	}
	ligne_remplie = false;
	while (!ligne_remplie)
	{
		std::cout << "phone number ?" << std::endl;
		std::getline(std::cin, phoneNumber);
		if (!phoneNumber.empty())
		{
			ligne_remplie = true;
		}
		else
		{
			std::cout << "phone number cannot be empty. please enter a valid phone number." << std::endl;
		}
	}
	ligne_remplie = false;
	while (!ligne_remplie)
	{
		std::cout << "darkest secret ?" << std::endl;
		std::getline(std::cin, darkestSecret);
		if (!darkestSecret.empty())
		{
			ligne_remplie = true;
		}
		else
		{
			std::cout << "darkest secret cannot be empty. please enter a valid darkest secret." << std::endl;
		}
	}
	Contact newContact;
	newContact.setFirstName(firstName);
	newContact.setLastName(lastName);
	newContact.setNickname(nickname);
	newContact.setPhoneNumber(phoneNumber);
	newContact.setDarkestSecret(darkestSecret);

	phoneBook.addContact(newContact);
	std::cout << "Contact added successfully!\n" << std::endl;
}

void search_contact(PhoneBook& phoneBook)
{
    if (phoneBook.getCount() == 0) {
        std::cout << "Phonebook is empty!" << std::endl;
        return;
    }
    std::cout << "contacts list" << std::endl;
    phoneBook.displayContacts();
    std::cout << "enter the index of the contact to view details: ";
    std::string input;
    std::getline(std::cin, input);
    // Conversion string
    std::stringstream ss(input);
    int index;
    // Vérifie si la conversion est valide
    if (!(ss >> index) || !(ss.eof())) {
        std::cout << "Invalid index! Please enter a number." << std::endl;
        return;
    }
    
    phoneBook.displayContact(index);
}

int main()
{
	PhoneBook phoneBook;
	how_to_use();
	while (1)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		std::string command;
		if (!std::getline(std::cin, command))
		{
			std::cout << std::endl;
			break;
		}
		if (command == "EXIT")
			break;
		else if (command == "ADD")
		{
			add_contact(phoneBook);
		}
		else if (command == "SEARCH")
		{
			search_contact(phoneBook);
		}
		else
		{
			std::cout << "invalid command. try again" << std::endl;
		}
	}
	return 0;
}


// gerer control D pour pas segfault
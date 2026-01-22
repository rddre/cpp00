/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaracut <asaracut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 09:45:00 by asaracut          #+#    #+#             */
/*   Updated: 2026/01/22 23:09:15 by asaracut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>  // ← Ajoute cet include

// Constructeur :        ces variables sont initialisées à 0 avant le lancement de la fonction
PhoneBook::PhoneBook() : count(0), nextIndex(0)
{}

// Ajouter un contact dans le phonebook
void PhoneBook::addContact(const Contact& contact)
{
	contacts[nextIndex] = contact;
	nextIndex = (nextIndex + 1) % 8; // modulo pour revenir à 0 après 7
	if (count < 8) // garder count à maximum 8
		count++;
}

// Fonction utilitaire : formater une chaîne sur 10 caractères
// Si trop longue : tronquer et mettre un '.' à la fin
// Si trop courte : aligner à droite avec des espaces
static std::string formatColumn(const std::string& str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return std::string(10 - str.length(), ' ') + str;
}

// Fonction utilitaire : convertir int → string en C++98
static std::string intToString(int n)
{
    std::stringstream ss;
    ss << n;
    return ss.str();
}

// Afficher la liste des contacts (format tableau)
void PhoneBook::displayContacts() const
{
	std::cout << std::endl;
	std::cout << "|" << formatColumn("Index");
	std::cout << "|" << formatColumn("First Name");
	std::cout << "|" << formatColumn("Last Name");
	std::cout << "|" << formatColumn("Nickname");
	std::cout << "|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	
	for (int i = 0; i < count; i++)
	{
		if (!contacts[i].isEmpty())
		{
			std::cout << "|" << formatColumn(intToString(i + 1));
			std::cout << "|" << formatColumn(contacts[i].getFirstName());
			std::cout << "|" << formatColumn(contacts[i].getLastName());
			std::cout << "|" << formatColumn(contacts[i].getNickname());
			std::cout << "|" << std::endl;
		}
	}
	std::cout << std::endl;
}

// Afficher un contact spécifique par son index (1-based)
void PhoneBook::displayContact(int index) const
{
	// Convertir l'index utilisateur (1-based) en index tableau (0-based)
	int i = index - 1;
	
	// Vérifier que l'index est valide
	if (i < 0 || i >= count || contacts[i].isEmpty()) {
		std::cout << "Invalid index!" << std::endl;
		return;
	}
	
	std::cout << std::endl;
	std::cout << "First Name    : " << contacts[i].getFirstName() << std::endl;
	std::cout << "Last Name     : " << contacts[i].getLastName() << std::endl;
	std::cout << "Nickname      : " << contacts[i].getNickname() << std::endl;
	std::cout << "Phone Number  : " << contacts[i].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contacts[i].getDarkestSecret() << std::endl;
	std::cout << std::endl;
}

int PhoneBook::getCount() const {
	return count;
}

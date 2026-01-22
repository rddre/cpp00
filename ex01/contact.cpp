/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaracut <asaracut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 02:12:36 by asaracut          #+#    #+#             */
/*   Updated: 2026/01/22 22:37:10 by asaracut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

// Constructeur : initialise un contact vide
// constructeur = initialiseur
// classe = structure comme en c
Contact::Contact()
{
	// Les std::string sont automatiquement initialisés vides
}

// Setters : permettent de modifier les attributs depuis l'extérieur
void Contact::setFirstName(const std::string& fn)
{
	firstName = fn;
}

void Contact::setLastName(const std::string& ln)
{
	lastName = ln;
}

void Contact::setNickname(const std::string& nn)
{
	nickname = nn;
}

void Contact::setPhoneNumber(const std::string& pn)
{
	phoneNumber = pn;
}

void Contact::setDarkestSecret(const std::string& ds)
{
	darkestSecret = ds;
}

// Getters : permettent de lire les attributs depuis l'extérieur
std::string Contact::getFirstName() const
{
	return firstName;
}

std::string Contact::getLastName() const
{
	return lastName;
}

std::string Contact::getNickname() const
{
	return nickname;
}

std::string Contact::getPhoneNumber() const
{
	return phoneNumber;
}

std::string Contact::getDarkestSecret() const
{
	return darkestSecret;
}

// Vérifie si le contact est vide (aucun champ rempli)
bool Contact::isEmpty() const
{
	return firstName.empty(); //if (!firstName || strcmp(firstName, "") == 0)
}


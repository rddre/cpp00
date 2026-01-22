/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaracut <asaracut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 02:12:41 by asaracut          #+#    #+#             */
/*   Updated: 2026/01/22 22:27:33 by asaracut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook {
private:
	Contact contacts[8]; // ici je met les contacts
	int count; // pour savoir combien de contacts on a, si a on a 8 on remplace le plus ancien
	// Index circulaire : position où ajouter le prochain contact (0-7)
	// Quand on atteint 8, on revient à 0 (remplace le plus ancien)
	int nextIndex;

public:
	PhoneBook(); // Constructeur
	void addContact(const Contact& contact); // Ajouter un contact : remplace le plus ancien si on dépasse 8
	void displayContacts() const; // Afficher la liste des contacts en mode tableau
	void displayContact(int index) const; // Afficher un contact par son index
	int getCount() const; // en rapport avec count
};

#endif


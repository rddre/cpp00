/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaracut <asaracut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 02:12:31 by asaracut          #+#    #+#             */
/*   Updated: 2026/01/11 01:53:12 by asaracut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
	private:
		// Attributs privés (données du contact, accessibles uniquement à l'intérieur de la classe)
		std::string firstName;	// equivalent en c c'est char firstName[50];
								// char *str = malloc(50 * sizeof(char));
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;

	public:
		// Constructeur (initialise un contact vide)
		Contact();
		
		// Setters : permettent de modifier les attributs privés depuis l'extérieur
		void setFirstName(const std::string& fn);
		void setLastName(const std::string& ln);
		void setNickname(const std::string& nn);
		void setPhoneNumber(const std::string& pn);
		void setDarkestSecret(const std::string& ds);
	
	// Getters : permettent de lire les attributs privés depuis l'extérieur
	std::string getFirstName() const; //const char *getFirstName()
	std::string getLastName() const;
	std::string getNickname() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;
	
	// Méthode utile : vérifier si le contact est vide (non initialisé)
	bool isEmpty() const;
};

#endif


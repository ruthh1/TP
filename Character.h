#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <iostream>

class Character{

	// Attributs
	public:
		float speed_;
		float max_speed_;


	// Fonctions
	public:
		// Constructeur :
		Character();

		// Méthodes:
		void Accelerate();
		void Break();

		inline float speed() const{
			return speed_;
		};

		inline float maxSpeed() const{
			return max_speed_;
		};

		// Destructeur :
		~Character();

		// virtual function member :
		virtual std::string WhatAmI() const = 0;
		// At compile time, it now checks if there are child classes with this function defined and not virtual

};

#endif 




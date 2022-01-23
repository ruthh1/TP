#include "Mario.h"
#include "Character.h"

// Constructeur :
Mario::Mario()
{

};

// Méthodes :
std::string Mario::WhatAmI() const
{
	return "Mario";
}

// Destructeur :
Mario::~Mario()
{
	std::cout << "The character " << this << " has been destroyed." << std::endl;
};


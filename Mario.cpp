#include "Mario.h"
#include "Character.h"

// Constructeur :
Mario::Mario()
{

};

// M�thodes :
std::string Mario::WhatAmI() const
{
	return "Mario";
}

// Destructeur :
Mario::~Mario()
{
	std::cout << "The character " << this << " has been destroyed." << std::endl;
};


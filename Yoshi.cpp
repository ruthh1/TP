#include "Yoshi.h"
#include "Character.h"

// Constructeur :
Yoshi::Yoshi(int crests)
{
	crests_ = crests;
};

// Méthodes :
std::string Yoshi::WhatAmI() const
{
	return std::to_string(crests_) + " crested Yoshi";
}

void Yoshi::Accelerate()
{
	if (speed_ < max_speed_ - 1)
		speed_+=2;
}

// Destructeur :
Yoshi::~Yoshi()
{
	std::cout << "The character " << this << " has been destroyed." << std::endl;
};


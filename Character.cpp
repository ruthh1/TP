#include "Character.h"

// Constructeur :
Character::Character()
{
	speed_ = 0;
	max_speed_ = 10;
};

// Méthodes :
void Character::Accelerate()
{
	if (speed_ < max_speed_)
		speed_++;
};

void Character::Break()
{
	if (speed_ > 0)
		speed_--;
};

// Destructeur :
Character::~Character()
{
	std::cout << "The character " << this << " has been destroyed." << std::endl;
};

#ifndef MARIO_H
#define MARIO_H

#include <string>
#include <iostream>
#include "Character.h"

class Mario: public Character
{
public:
	Mario();
	~Mario();
	std::string WhatAmI() const;
};

#endif // MARIO_H

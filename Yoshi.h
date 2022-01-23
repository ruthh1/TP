#ifndef YOSHI_H
#define YOSHI_H

#include <string>
#include <iostream>
#include "Character.h"

class Yoshi : public Character
{
private:
	int crests_;

public:
	Yoshi(int crests);
	void Accelerate();
	std::string WhatAmI() const;
	~Yoshi();
};

#endif // YOSHI_H

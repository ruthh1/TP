#include <iostream>
#include <cstdlib> 
#include <ctime> 
#include <string>
#include <vector>
#include "Character.h"
#include "Mario.h"
#include "Yoshi.h"

int main()
{
	srand((unsigned int)time(0));

	std::vector<Character*> characters;

	for (int i = 0; i < 5; i++)
	{
		characters.push_back(new Mario());
		characters.push_back(new Yoshi(rand() % 10));
	}

	for (Character* c: characters)
	{
		std::cout << "Hey, i'm " << c->WhatAmI() << std::endl;
	}
}

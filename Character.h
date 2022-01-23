#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <iostream>

class Character
{
public:
	float speed_;
	float max_speed_;

public:
	Character();

	void Accelerate();
	void Break();

	inline float speed() const
	{
		return speed_;
	};
	inline float maxSpeed() const
	{
		return max_speed_;
	};

	~Character();

	virtual std::string WhatAmI() const = 0;
	// At compile time, it now checks if there are child classes with this function defined and not virtual
};

#endif 



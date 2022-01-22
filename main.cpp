#include "Character.h"
#include <iostream>
#include <string>


int main(){
	
	Character* a;
	std::cout << "My first character " << a << " with speed " << a->speed() << std::endl;
	// pour le détruire : delete a;

	a->Accelerate();
	std::cout << "My first character " << a << " with new speed after increasing : " << a->speed() << std::endl;

	a->Break();
	std::cout << "My first character " << a << " with new speed after decreasing : " << a->speed() << std::endl;

   	a->WhatAmI();
   	



}


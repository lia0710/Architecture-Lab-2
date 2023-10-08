#include "Object.h"
#include <iostream>

Object::Object()
{
	std::cout << "Object Created" << std::endl;
}

Object::~Object()
{
	std::cout << "Object Destructed" << std::endl;
}

void Object::Destroy()
{
	std::cout << "Object Destroyed" << std::endl;
}

void Object::Initialize()
{
	std::cout << "Object Initialized" << std::endl;
}

bool Object::IsInitialized()
{

}

void Object::Load()
{
	std::cout << "Object Loaded" << std::endl;
}
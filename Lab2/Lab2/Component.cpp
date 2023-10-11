#include "Component.h"

#include <iostream>

Component::Component()
{
	std::cout << "Component Created" << std::endl;
}

Component::~Component()
{
	std::cout << "Component Destructed" << std::endl;
	Component::~Component();
}

void Component::Initialize()
{
	std::cout << "Component Initialized" << std::endl;
}

void Component::Destroy()
{
	std::cout << "Component Destroyed" << std::endl;
}

int Component::GetComponentID()
{
	return 0;
}

void Component::Update()
{
	std::cout << "Component Updated" << std::endl;
}

void Component::Load()
{
	std::cout << "Component Loaded" << std::endl;
}
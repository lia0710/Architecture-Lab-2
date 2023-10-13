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

void Component::Load(json::JSON file)
{
	std::cout << "Component Loading" << std::endl;

		if (file.hasKey("className"))
		{
			json::JSON name = file["className"];
			Component::name = name.ToString();
			std::cout << "Class Name: " << name.ToString() << "\n";
		}

		if (file.hasKey("id"))
		{
			json::JSON compId = file["id"];
			Component::id = compId.ToInt();
			std::cout << "id: " << Component::id << "\n";
		}
	
	std::cout << "Component Loaded" << std::endl;
}
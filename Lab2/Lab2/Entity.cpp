#include "Entity.h"
#include "Component.h"
#include <iostream>

Entity::Entity()
{
	std::cout << "Entity Created" << std::endl;
}

Entity::~Entity()
{
	std::cout << "Entity Destructed" << std::endl;
}

void Entity::Initialize()
{
	std::cout << "Entity Initialized" << std::endl;
}

void Entity::Destroy()
{
	std::cout << "Entity Destroyed" << std::endl;
	for (std::list<Component*>::iterator it = Entity::components.begin(); it != Entity::components.end(); it++)
	{
		(*it)->Destroy();
	}
	Entity::~Entity();
}

void Entity::AddComponent(Component* _component)
{
	components.push_back(_component);
}

void Entity::RemoveComponent(Component* _component)
{

}

void Entity::Update()
{
	std::cout << "Entity Updated" << std::endl;
	for (std::list<Component*>::iterator it = Entity::components.begin(); it != Entity::components.end(); it++)
	{
		(*it)->Update();
	}
}

std::string Entity::GetName()
{
	return "";
}

void Entity::Load(json::JSON file)
{
	std::cout << "Entity Loading" << std::endl;
	if (file.hasKey("Name"))
	{
		json::JSON name = file["Name"];
		Entity::name = name.ToString();
		std::cout << "Name: " << name.ToString() << "\n";
	}

	if (file.hasKey("Components"))
	{
		json::JSON jsonComponents = file["Components"];
		for (int i = 0; i < jsonComponents.length(); i++)
		{
			Component* newComponent = new Component();
			AddComponent(newComponent);
			newComponent->Load(jsonComponents[i]);
		}
	}
	std::cout << "Entity Loaded" << std::endl;
}
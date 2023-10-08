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
}

void Entity::AddComponent(Component* _component)
{

}

void Entity::RemoveComponent(Component* _component)
{

}

void Entity::Update()
{
	std::cout << "Entity Updated" << std::endl;
}

std::string Entity::GetName()
{
	return "";
}

void Entity::Load()
{
	std::cout << "Entity Loaded" << std::endl;
}
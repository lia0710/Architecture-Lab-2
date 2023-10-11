#pragma once
#ifndef _ENTITY_H_
#define _ENTITY_H_
#include <string>
#include "Component.h"
#include "json.hpp"

class Entity
{
public:
	Entity();
	~Entity();
	void Initialize();
	void Destroy();
	void AddComponent(Component* _component);
	void RemoveComponent(Component* _component);
	void Update();
	std::string GetName();
	void Load(json::JSON file);
};

#endif
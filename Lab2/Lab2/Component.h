#pragma once
#ifndef _COMPONENT_H_
#define _COMPONENT_H_
#include "json.hpp"

class Component
{
public:
	int id = 0;

	Component();
	~Component();
	void Initialize();
	void Destroy();
	int GetComponentID();
	void Update();
	void Load(json::JSON file);
};

#endif

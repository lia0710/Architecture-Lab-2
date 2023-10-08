#pragma once
#ifndef _COMPONENT_H_
#define _COMPONENT_H_

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
	void Load();
};

#endif

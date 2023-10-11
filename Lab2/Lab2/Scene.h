#pragma once
#ifndef _SCENE_H_
#define _SCENE_H_
#include "Entity.h"
#include <list>
#include "json.hpp"

class Scene
{
	std::list<Entity*> entities;
	std::string name = "";
	
public:
	Scene();
	~Scene();
	void Initialize();
	void Destroy();
	void Update();
	void AddEntity(Entity* _entity);
	void RemoveEntity(Entity* _entity);
	void Load(json::JSON file);
};

#endif
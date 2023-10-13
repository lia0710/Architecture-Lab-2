#include "Scene.h"

#include <iostream>

Scene::Scene()
{
	std::cout << "Scene Created" << std::endl;
}

Scene::~Scene()
{
	std::cout << "Scene Destructed" << std::endl;
}

void Scene::Initialize()
{
	std::cout << "Scene Initialized" << std::endl;
}

void Scene::Destroy()
{
	std::cout << "Scene Destroyed" << std::endl;
	for (std::list<Entity*>::iterator it = Scene::entities.begin(); it != Scene::entities.end(); it++)
	{
		(*it)->Destroy();
	}
	Scene::~Scene();
}

void Scene::Update()
{
	std::cout << "Scene Updated" << std::endl;
	for (std::list<Entity*>::iterator it = Scene::entities.begin(); it != Scene::entities.end(); it++)
	{
		(*it)->Update();
	}
}

void Scene::AddEntity(Entity* _entity) 
{
	entities.push_back(_entity);
}

void Scene::RemoveEntity(Entity* _entity)
{

}

void Scene::Load(json::JSON file)
{
	std::cout << "Scene Loading" << std::endl;
	if (file[0].hasKey("name"))
	{
		json::JSON name = file[0]["name"];
		Scene::name = name.ToString();
		std::cout << "Name: " << name.ToString() << "\n";
	}

	if (file[0].hasKey("Entities"))
	{
		json::JSON jsonEntities = file[0]["Entities"];
		for (int i = 0; i < jsonEntities.length(); i++)
		{
			Entity* newEntity = new Entity();
			AddEntity(newEntity);
			newEntity->Load(jsonEntities[i]);
		}

		//newScene->Load(sceneManager);
	}
	std::cout << "Scene Loaded" << std::endl;
}
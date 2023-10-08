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
}

void Scene::Update()
{
	std::cout << "Scene Updated" << std::endl;
}

void Scene::AddEntity(Entity* _entity) 
{

}

void Scene::RemoveEntity(Entity* _entity)
{

}

void Scene::Load()
{
	std::cout << "Scene Loaded" << std::endl;
}
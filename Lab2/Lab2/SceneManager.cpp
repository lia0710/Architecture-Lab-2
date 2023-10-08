#include "SceneManager.h"

#include <iostream>

SceneManager::SceneManager()
{
	std::cout << "Scene Manager Created" << std::endl;
}

SceneManager::~SceneManager()
{
	std::cout << "Scene Manager Destructed" << std::endl;
}

void SceneManager::Initialize()
{
	std::cout << "Scene Manager Initialized" << std::endl;
}

void SceneManager::Destroy()
{
	std::cout << "Scene Manager Destroyed" << std::endl;
}

void SceneManager::Update()
{
	std::cout << "Scene Manager Updated" << std::endl;
}

void SceneManager::AddScene(Scene* _scene)
{

}

void SceneManager::RemoveScene(Scene* _scene)
{

}

void SceneManager::Load()
{
	std::cout << "Scene Manager Loaded" << std::endl;
}
#include "SceneManager.h"
#include "Scene.h"
#include "json.hpp"
#include <fstream>
#include <iostream>

SceneManager::SceneManager()
{
	std::cout << "Scene Manager Created" << std::endl;
}

SceneManager::~SceneManager()
{
	for (std::list<Scene*>::iterator it = SceneManager::scenes.begin(); it != SceneManager::scenes.end(); it++)
	{
		(*it)->Destroy();
	}
	std::cout << "Scene Manager Destructed" << std::endl;
}

void SceneManager::Initialize()
{
	std::cout << "Scene Manager Initialized" << std::endl;
}

void SceneManager::Destroy()
{
	std::cout << "Scene Manager Destroyed" << std::endl;
	SceneManager::~SceneManager();
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

void SceneManager::Load(json::JSON file)
{
    if (file.hasKey("SceneManager"))
    {
        json::JSON sceneManager = file["SceneManager"];
        Scene* newScene = new Scene();
		scenes.push_back(newScene);
		newScene->Load(sceneManager);
		std::cout << "Scene Manager Loaded" << std::endl;

    }
}
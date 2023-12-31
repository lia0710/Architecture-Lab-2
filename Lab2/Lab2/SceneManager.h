#pragma once
#ifndef _SCENEMANAGER_H_
#define _SCENEMANAGER_H_
#include "Scene.h"
#include <list>
#include "json.hpp"

class SceneManager
{
	std::list<Scene*> scenes;

public:
	SceneManager();
	~SceneManager();
	void Initialize();
	void Destroy();
	void Update();
	void AddScene(Scene* _scene);
	void RemoveScene(Scene* _scene);
	void Load(json::JSON file);
};

#endif
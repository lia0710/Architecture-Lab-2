#pragma once
#ifndef _ENGINE_H_
#define _ENGINE_H_
#include "RenderSystem.h"
#include "InputManager.h"
#include "AssetManager.h"
#include "SceneManager.h"
#include "json.hpp"

class Engine
{
	RenderSystem* renderSystem; //= new RenderSystem;
	InputManager* inputManager; //= new InputManager;
	AssetManager* assetManager; //= new AssetManager;
	SceneManager* sceneManager; //= new SceneManager;

public:
	Engine();
	~Engine();
	void Initialize();
	void Destroy();
	void GameLoop();
	void Load(json::JSON settingDocument);
};
#endif



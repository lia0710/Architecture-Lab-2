#include "Engine.h"
#include "json.hpp"
#include <iostream>
#include <fstream>

Engine::Engine()
{
	std::cout << "Engine Created" << std::endl;

	Engine::renderSystem = new RenderSystem;
	Engine::inputManager = new InputManager;
	Engine::assetManager = new AssetManager;
	Engine::sceneManager = new SceneManager;

	Initialize();
}

Engine::~Engine()
{
	delete Engine::renderSystem;
	delete Engine::inputManager;
	delete Engine::assetManager;
	delete Engine::sceneManager;
	std::cout << "Engine Destructed" << std::endl;
}

void Engine::Initialize()
{
	std::cout << "Engine Initializing" << std::endl;

	//load game settings
	//half goes in here, half in render system
	std::ifstream SettinginputStream("GameSettings.json");
	std::string Settingstr((std::istreambuf_iterator<char>(SettinginputStream)), std::istreambuf_iterator<char>());
	json::JSON settingdocument = json::JSON::Load(Settingstr);


	Load(settingdocument);

	std::ifstream LevelinputStream(levelDocument.ToString());
	std::string Levelstr((std::istreambuf_iterator<char>(LevelinputStream)), std::istreambuf_iterator<char>());
	json::JSON leveldocument = json::JSON::Load(Levelstr);

	Engine::sceneManager->Load(leveldocument);

	std::cout << "Engine Initialized" << std::endl;
}

void Engine::Destroy()
{
	std::cout << "Engine Destroyed" << std::endl;
	Engine::~Engine();
}

void Engine::GameLoop()
{
	std::cout << "Begining Game Loop" << std::endl;
	renderSystem->Update();
	assetManager->Update();
	inputManager->Update();
	sceneManager->Update();
}

void Engine::Load(json::JSON settingDocument)
{
	std::cout << "Engine Loading" << std::endl;
	if (settingDocument.hasKey("Engine"))
	{
		json::JSON engine = settingDocument["Engine"];

		if (engine.hasKey("DefaultFile"))
		{
			Engine::levelDocument = engine["DefaultFile"];
			std::cout << "File: " << Engine::levelDocument.ToString() << "\n";
			std::cout << "Engine Loaded" << std::endl;

			Engine::renderSystem->Load(settingDocument);
		}
	}
}
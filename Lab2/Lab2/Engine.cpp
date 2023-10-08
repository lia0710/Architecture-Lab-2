#include "Engine.h"
#include "json.hpp"
#include <iostream>
#include <fstream>

Engine::Engine()
{
	std::cout << "Engine Created" << std::endl;
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
	//load game settings
	//half goes in here, half in render system
	//Load();
	sceneManager->Initialize();
	std::ifstream SettinginputStream("GameSettings.json");
	std::string Settingstr((std::istreambuf_iterator<char>(SettinginputStream)), std::istreambuf_iterator<char>());
	json::JSON settingdocument = json::JSON::Load(Settingstr);

	if (settingdocument.hasKey("Engine"))
	{
		//first check and then save the sub object
		json::JSON engine = settingdocument["Engine"];

		if (engine.hasKey("DefaultFile"))
		{
			std::cout << "File: " << engine["DefaultFile"].ToString() << "\n";
		}
	}

	std::cout << "Engine Initialized" << std::endl;
}

void Engine::Destroy()
{
	std::cout << "Engine Destroyed" << std::endl;
}

void Engine::GameLoop()
{

}

void Engine::Load()
{
	std::cout << "Engine Loaded" << std::endl;
}
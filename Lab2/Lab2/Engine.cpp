#include "Engine.h"

#include <iostream>

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
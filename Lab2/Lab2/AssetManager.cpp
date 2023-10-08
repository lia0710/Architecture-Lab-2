#include "AssetManager.h"

#include <iostream>

AssetManager::AssetManager()
{
	std::cout << "Asset Manager Created" << std::endl;
}

AssetManager::~AssetManager()
{
	std::cout << "Asset Manager Destructed" << std::endl;
}

void AssetManager::Initialize()
{
	std::cout << "Asset Manager Initialized" << std::endl;
}

void AssetManager::Destroy()
{
	std::cout << "Asset Manager Destroyed" << std::endl;
}

void AssetManager::Update()
{
	std::cout << "Asset Manager Updated" << std::endl;
}

void AssetManager::Load()
{
	std::cout << "Asset Manager Loaded" << std::endl;
}
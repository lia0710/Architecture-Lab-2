#include "RenderSystem.h"

#include <iostream>

RenderSystem::RenderSystem()
{
	std::cout << "Render System Created" << std::endl;
}

RenderSystem::~RenderSystem()
{
	std::cout << "Render System Destructed" << std::endl;
}

void RenderSystem::Initialize()
{
	std::cout << "Render System Initialized" << std::endl;
}

void RenderSystem::Destroy()
{
	std::cout << "Render System Destroyed" << std::endl;
}

void RenderSystem::Update()
{
	std::cout << "Render System Updated" << std::endl;
}

void RenderSystem::Load()
{
	std::cout << "Render System Loaded" << std::endl;
}
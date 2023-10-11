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

void RenderSystem::Load(json::JSON file)
{
	if (file.hasKey("RenderSystem"))
	{
		json::JSON renderSystem = file["RenderSystem"];

		if (renderSystem.hasKey("Name"))
		{
			json::JSON _name = renderSystem["Name"];
			RenderSystem::name = _name.ToString();
			std::cout << "Name: " << _name.ToString() << "\n";
		}

		if (renderSystem.hasKey("width"))
		{
			json::JSON _width = renderSystem["width"];
			RenderSystem::width = _width.ToInt();
			std::cout << "Width: " << _width.ToInt() << "\n";
		}

		if (renderSystem.hasKey("height"))
		{
			json::JSON _height = renderSystem["height"];
			RenderSystem::height = _height.ToInt();
			std::cout << "Height: " << _height.ToInt() << "\n";
		}

		if (renderSystem.hasKey("fullscreen"))
		{
			json::JSON _fullscreen = renderSystem["fullscreen"];
			RenderSystem::fullscreen = _fullscreen.ToBool();
			std::cout << "Fullscreen: " << _fullscreen.ToBool() << "\n";
		}

		std::cout << "Render System Loaded" << std::endl;
		Initialize();
	}
}
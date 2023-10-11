#pragma once
#ifndef _RENDER_H_
#define _RENDER_H_
#include <string>
#include "json.hpp"

class RenderSystem
{
	std::string name = "";
	int width = 0;
	int height = 0;
	bool fullscreen = false;

public:
	RenderSystem();
	~RenderSystem();
	void Initialize();
	void Destroy();
	void Update();
	void Load(json::JSON file);
};

#endif
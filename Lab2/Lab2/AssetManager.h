#pragma once
#ifndef _ASSET_H_
#define _ASSET_H_

class AssetManager
{

public:
	AssetManager();
	~AssetManager();
	void Initialize();
	void Destroy();
	void Update();
	void Load();
};

#endif
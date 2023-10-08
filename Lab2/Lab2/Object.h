#pragma once
#ifndef _OBJECT_H_
#define _OBJECT_H_

class Object
{
	bool initialized = false;

public:
	Object();
	~Object();
	void Destroy();
	void Initialize();
	bool IsInitialized();
	void Load();
};

#endif

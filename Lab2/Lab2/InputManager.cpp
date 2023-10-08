#include "InputManager.h"

#include <iostream>

InputManager::InputManager()
{
	std::cout << "Input Manager Created" << std::endl;
}

InputManager::~InputManager()
{
	std::cout << "Input Manager Destructed" << std::endl;
}

void InputManager::Initialize()
{
	std::cout << "Input Manager Initialized" << std::endl;
}

void InputManager::Destroy()
{
	std::cout << "Input Manager Destroyed" << std::endl;
}

void InputManager::Update()
{
	std::cout << "Input Manager Updated" << std::endl;
}

void InputManager::Load()
{
	std::cout << "Input Manager Loaded" << std::endl;
}
#include "SceneManager.h"
#include "json.hpp"
#include <fstream>
#include <iostream>

SceneManager::SceneManager()
{
	std::cout << "Scene Manager Created" << std::endl;
}

SceneManager::~SceneManager()
{
	std::cout << "Scene Manager Destructed" << std::endl;
}

void SceneManager::Initialize()
{
	std::ifstream LevelinputStream("GameLevelExample.json");
	std::string Levelstr((std::istreambuf_iterator<char>(LevelinputStream)), std::istreambuf_iterator<char>());
	json::JSON leveldocument = json::JSON::Load(Levelstr);

	if (leveldocument.hasKey("SceneManager"))
	{
		json::JSON sceneManager = leveldocument["SceneManager"];
		if (sceneManager[0].hasKey("name"))
		{
            json::JSON sceneName = sceneManager[0]["name"];
			//std::cout << "Scene Name: " << sceneName.ToString() << "\n";
		}
	}
	std::cout << "Scene Manager Initialized" << std::endl;
    //everything is within Scene_01
    //scene 1 has only one index, 0
    //inside index 0 is name (Scene_01) and Entities
    //entities contains everything but the scene name
    //
    /* {"SceneManager": [ {"name": "Scene_01", "Entities" : 
    [ {"Name": "Bob","Components" : [ {"className": "Component", "id" : 1001} ]
            },
        {
          "Name": "Fred",
          "Components" : [
            {
              "className": "Component",
              "id" : 2001
            },
            {
              "className": "Component",
              "id" : 2002
            }
          ]
        },
        {
          "Name": "Mary",
          "Components" : [
            {
              "className": "Component",
              "id" : 3001
            },
            {
              "className": "Component",
              "id" : 3002
            },
            {
              "className": "Component",
              "id" : 3003
            }
          ]
        }
                ]
        }
        ]
    }*/
}

void SceneManager::Destroy()
{
	std::cout << "Scene Manager Destroyed" << std::endl;
}

void SceneManager::Update()
{
	std::cout << "Scene Manager Updated" << std::endl;
}

void SceneManager::AddScene(Scene* _scene)
{

}

void SceneManager::RemoveScene(Scene* _scene)
{

}

void SceneManager::Load()
{
	std::cout << "Scene Manager Loaded" << std::endl;
}
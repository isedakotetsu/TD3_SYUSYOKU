#pragma once
#include <KamataEngine.h>

using namespace KamataEngine;

class GameScene
{
public:
	void Initialize();

	void UpDate();

	void Draw();

	~GameScene();

private:

	KamataEngine::Camera camera_;
	KamataEngine::WorldTransform worldTransform_;
	

};
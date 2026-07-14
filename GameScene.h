#pragma once
#include <KamataEngine.h>
#include "Math.h"
#include "UpData.h"
#include "Bomb.h"
using namespace KamataEngine;

class GameScene
{
public:
	void Initialize();

	void UpDate();

	void Draw();

	~GameScene();

private:

	KamataEngine::Camera cameraFront_;
	KamataEngine::Camera cameraBack_;
	KamataEngine::Camera* currentCamera_ = nullptr;
	KamataEngine::Model* model_ = nullptr;
	KamataEngine::WorldTransform worldTransform_;
	KamataEngine::Model* Bombmodel_ = nullptr;
	Bomb* bomb_ = nullptr;


};
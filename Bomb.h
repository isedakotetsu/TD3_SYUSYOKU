#pragma once
#include <KamataEngine.h>
#include "Math.h"
#include "UpData.h"
#include "WireCutModule.h"

class Bomb
{
public:
	void Initialize(KamataEngine::Model* model, const KamataEngine::Vector3& position);

	void UpDate();

	void Draw(KamataEngine::Camera& camera);

	

private:
	KamataEngine::WorldTransform worldTransform_;
	KamataEngine::Model* model_;
	UpData* updatetransform_ = nullptr;

	// ワイヤーモデル
	KamataEngine::Model* wireModel_ = nullptr;
	KamataEngine::Model* cutWireModel_ = nullptr;

	// ワイヤーモジュール
	WireCutModule* wireModule_ = nullptr;
	
};


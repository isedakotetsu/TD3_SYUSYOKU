#include "Bomb.h"

using namespace KamataEngine;

void Bomb::Initialize(KamataEngine::Model* model, const KamataEngine::Vector3& position)
{
	assert(model);

	worldTransform_.Initialize();
	worldTransform_.translation_ = position;
	model_ = model;

	// ワイヤーモデルを読み込む
	wireModel_ =Model::CreateFromOBJ("wire"); 
	cutWireModel_ = Model::CreateFromOBJ("wirecut");

	// ワイヤーモジュール生成
	wireModule_ = new WireCutModule();
	wireModule_->Initialize(wireModel_, cutWireModel_, {0.0f, 0.0f, 40.0f});

	
}

void Bomb::UpDate()
{
	updatetransform_->WorldTransformUpData(worldTransform_);
}

void Bomb::Draw(KamataEngine::Camera& camera)
{
	model_->Draw(worldTransform_, camera);
	
	wireModule_->Draw(camera);
}



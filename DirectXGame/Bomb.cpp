#include "Bomb.h"

using namespace KamataEngine;

void Bomb::Initialize(KamataEngine::Model* model, const KamataEngine::Vector3& position)
{
	//assert(model);

	worldTransform_.Initialize();
	worldTransform_.translation_ = position;
	model_ = model;

	

	
}

void Bomb::UpDate()
{
	updatetransform_->WorldTransformUpData(worldTransform_);
}

void Bomb::Draw(KamataEngine::Camera& camera)
{
	model_->Draw(worldTransform_, camera);
	
	
}



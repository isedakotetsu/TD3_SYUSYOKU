#include "WireCutModule.h"

using namespace KamataEngine;

WireCutModule::WireCutModule()
{

}

WireCutModule::~WireCutModule()
{

}

void WireCutModule::Initialize(Model* wireModel, Model* cutWireModel,const Vector3& position)
{
    wireModel_ = wireModel;
    cutWireModel_ = cutWireModel;

    worldTransform_.Initialize();
    worldTransform_.translation_ = position;

}

void WireCutModule::Update()
{
    // ここに線切り判定を書く
   
}

void WireCutModule::Draw(Camera& camera)
{
	wireModel_->Draw(worldTransform_, camera);
    cutWireModel_->Draw(worldTransform_, camera);
}


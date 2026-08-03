#pragma once
#include <KamataEngine.h>
#include "UpData.h"
#include "BombModule.h"




class WireCutModule : public BombModule
{
public:
    WireCutModule();
    ~WireCutModule() override;

    void Initialize(
        KamataEngine::Model* wireModel,
        KamataEngine::Model* cutWireModel,
        const KamataEngine::Vector3& position);

    void Update()override;

    void Draw(KamataEngine::Camera& camera)override;

    

private:
    // 通常
    KamataEngine::Model* wireModel_ = nullptr;
    // 切線
    KamataEngine::Model* cutWireModel_ = nullptr;

    KamataEngine::WorldTransform worldTransform_;

    UpData* updatetransform_ = nullptr;
  
};
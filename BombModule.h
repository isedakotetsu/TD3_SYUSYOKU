#pragma once
#include <KamataEngine.h>
class BombModule
{
public:
    virtual ~BombModule() = default;

    virtual void Update() {}
    virtual void Draw(KamataEngine::Camera& camera) = 0;
};
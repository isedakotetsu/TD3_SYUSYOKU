#include "GameScene.h"

using namespace KamataEngine;
void GameScene::Initialize()
{
	
	model_ = Model::Create();
	worldTransform_.Initialize();
	cameraFront_.Initialize();
	cameraBack_.Initialize();

	currentCamera_ = &cameraFront_;

	cameraFront_.translation_ = { 0.0f, 0.0f, -50.0f };
	// カメラの行列を再計算
	cameraFront_.UpdateMatrix();
	// 更新した行列をGPUへ転送
	cameraFront_.TransferMatrix();

	cameraBack_.translation_ = { 0.0f, 0.0f, -30.0f };
	cameraBack_.rotation_.y = 3.14f;
	//上と同じく
	cameraBack_.UpdateMatrix();
	cameraBack_.TransferMatrix();
	

	
	//ボム
	bomb_ = new Bomb();
	Bombmodel_ = Model::CreateFromOBJ("bom");
	

	Vector3 bombPosition = { 0.0f, 0.0f, -40.0f };
	bomb_->Initialize(Bombmodel_, bombPosition);



}

void GameScene::UpDate()
{
	//カメラ切り替え
	 if (Input::GetInstance()->TriggerKey(DIK_F1))
	 {
		 currentCamera_ = &cameraFront_;
	 }

	 if (Input::GetInstance()->TriggerKey(DIK_F2))
	 {
		 currentCamera_ = &cameraBack_;
	 }

	 bomb_->UpDate();

}

void GameScene::Draw()
{
	Model::PreDraw();

	bomb_->Draw(*currentCamera_);

	Model::PostDraw();
	
}


GameScene::~GameScene()
{
	Bombmodel_ = nullptr;
	bomb_ = nullptr;
}

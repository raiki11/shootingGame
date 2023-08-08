#include "GameMain.h"
#include"PadInput.h"

GameMain::GameMain()
{

}

GameMain::~GameMain()
{
}

AbstractScene* GameMain::Update()
{
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_BACK)) {
		DxLib_End;
	}
	return this;
}

void GameMain::Draw() const
{
	

	//デバッグ用
	DrawFormatString(0, 0, 0xffffff, "ゲームメインです");
	DrawCircle(640, 480, 10, GetColor(255, 215, 0), TRUE);
}

void GameMain::HitCheck()
{
}

void GameMain::SpawnBullet()
{
}

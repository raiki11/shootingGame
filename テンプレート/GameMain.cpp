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
	

	//�f�o�b�O�p
	DrawFormatString(0, 0, 0xffffff, "�Q�[�����C���ł�");
	DrawCircle(640, 480, 10, GetColor(255, 215, 0), TRUE);
}

void GameMain::HitCheck()
{
}

void GameMain::SpawnBullet()
{
}

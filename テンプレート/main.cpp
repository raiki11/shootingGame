#include "DxLib.h"
#include "SceneManager.h"
#include "PadInput.h"
#include"Define.h"
#include"Title.h"
#include"GameMain.h"

#define FRAMERATE 60.0	//�t���[�����[�g

//BGM�p�ϐ�
int BGM;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
{
	SetMainWindowText("�^�C�g��");

	ChangeWindowMode(TRUE);		// �E�B���h�E���[�h�ŋN��

	SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, 32);	//��ʃT�C�Y�̐ݒ�

	if (DxLib_Init() == -1) return -1;	// DX���C�u�����̏���������

	SetDrawScreen(DX_SCREEN_BACK);	// �`����ʂ𗠂ɂ���

	/*BGM = LoadSoundMem("sound/BGM.wav");*/

	//BGM�̍Đ�
	/*PlaySoundMem(BGM, DX_PLAYTYPE_LOOP, TRUE);*/

	SceneManager* sceneMng;

	try // �V�[����I�ԂƂ�������X�^�[�g����i�ŏI�I�ɂ�Title������j
	{
		sceneMng = new SceneManager((AbstractScene*)new GameMain());

	}
	catch (const char* err)
	{
		FILE* fp = NULL;

		DATEDATA data;

		GetDateTime(&data);
		//�t�@�C���I�[�v��
		fopen_s(&fp, "ErrLog.txt", "a");
		//�G���[�f�[�^�̏�������
		fprintf_s(fp, "%02d�N %02d�� %02d�� %02d�� %02d�� %02d�b : %s������܂���B\n", data.Year, data.Mon, data.Day, data.Hour, data.Min, data.Sec, err);

		return 0;
	}

	// �Q�[�����[�v
	while ((ProcessMessage() == 0) && (sceneMng->Update() != nullptr)) {

		ClearDrawScreen();		// ��ʂ̏�����
		PAD_INPUT::UpdateKey();
		sceneMng->Draw();
		//�����I��
		if (PAD_INPUT::OnButton(XINPUT_BUTTON_BACK))
		{
			break;
		}
		
		ScreenFlip();			// ����ʂ̓��e��\��ʂɔ��f
	}
	return 0;
}
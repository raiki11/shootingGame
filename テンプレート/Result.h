#pragma once
#include "AbstractScene.h"

// �V�[���}�l�[�W���[�N���X
// �e�V�[���̐؂�ւ����Ǘ�����

class Result :
    public AbstractScene
{
private:
   
public:

    // �R���X�g���N�^
    Result();

    //�f�X�g���N�^
    ~Result();

    //�`��ȊO�̍X�V�����s
    AbstractScene* Update() override;

    //�`��Ɋւ��邱�Ƃ�����
    void Draw() const override;

private:
};
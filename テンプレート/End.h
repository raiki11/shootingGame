#pragma once
#include "AbstractScene.h"

// �V�[���}�l�[�W���[�N���X
// �e�V�[���̐؂�ւ����Ǘ�����

class End :
    public AbstractScene
{
public:
    

    // �R���X�g���N�^
    End();

    //�f�X�g���N�^
    ~End();

    //�`��ȊO�̍X�V�����s
    AbstractScene* Update() override;

    //�`��Ɋւ��邱�Ƃ�����
    void Draw() const override;

private:
};
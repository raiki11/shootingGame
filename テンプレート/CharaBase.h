#pragma once
#include"GameMain.h"
#include"SphereCollider.h"

class CharaBase:public SphereCollider
{
private:
	float speed;
	int image;

public:

	virtual SphereCollider*Update(GameMain gamemain);

	void Draw();

	virtual SphereCollider* Hit();


};


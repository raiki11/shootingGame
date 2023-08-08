#pragma once
class SphereCollider
{
private:
	float location;
	int rasius;
public:
	virtual SphereCollider* CheckCollision(SphereCollider spherecollider);
};


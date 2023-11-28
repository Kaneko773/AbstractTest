#include <iostream>
#include "Skeleton.h"

using namespace std;

Skeleton::Skeleton() : Enemy(20, 4) 
{
	// hp��atk��ݒ肵�Ȃ��ꍇ
}
Skeleton::Skeleton(int hp, int atk) : Enemy(hp, atk){
	// hp��atk��ݒ肷��ꍇ
	_hp = hp;
	_atk = atk;
}

void Skeleton::attack(Enemy& enemy)
{
	enemy.damage(_atk);
}

void Skeleton::playBase(Enemy& enemy)
{
	cout << "�X�P���g���̍U���I" << endl;
	cout << "�G�� " << _atk << " �̃_���[�W�I" << endl;
	attack(enemy);
}
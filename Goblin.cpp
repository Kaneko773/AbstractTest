#include <iostream>
#include "Goblin.h"

using namespace std;

Goblin::Goblin() : Enemy(20, 3)
{
	// hp��atk��ݒ肵�Ȃ��ꍇ
}
Goblin::Goblin(int hp, int atk) : Enemy(hp, atk) {
	// hp��atk��ݒ肷��ꍇ
	_hp = hp;
	_atk = atk;
}

void Goblin::attack(Enemy& enemy)
{
	enemy.damage(_atk);
}

void Goblin::playBase(Enemy& enemy)
{
	cout << "�S�u�����̍U���I" << endl;
	cout << "�G�� " << _atk << " �̃_���[�W�I" << endl;
	attack(enemy);
}

#include <iostream>
#include "Goblin.h"

using namespace std;

Goblin::Goblin() : Enemy(20, 3)
{
	// hpとatkを設定しない場合
}
Goblin::Goblin(int hp, int atk) : Enemy(hp, atk) {
	// hpとatkを設定する場合
	_hp = hp;
	_atk = atk;
}

void Goblin::attack(Enemy& enemy)
{
	enemy.damage(_atk);
}

void Goblin::playBase(Enemy& enemy)
{
	cout << "ゴブリンの攻撃！" << endl;
	cout << "敵に " << _atk << " のダメージ！" << endl;
	attack(enemy);
}

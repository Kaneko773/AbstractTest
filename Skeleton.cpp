#include <iostream>
#include "Skeleton.h"

using namespace std;

Skeleton::Skeleton() : Enemy(20, 4) 
{
	// hpとatkを設定しない場合
}
Skeleton::Skeleton(int hp, int atk) : Enemy(hp, atk){
	// hpとatkを設定する場合
	_hp = hp;
	_atk = atk;
}

void Skeleton::attack(Enemy& enemy)
{
	enemy.damage(_atk);
}

void Skeleton::playBase(Enemy& enemy)
{
	cout << "スケルトンの攻撃！" << endl;
	cout << "敵に " << _atk << " のダメージ！" << endl;
	attack(enemy);
}
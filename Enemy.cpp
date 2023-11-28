#include <iostream>
#include "Enemy.h"

using namespace std;

Enemy::Enemy(int hp, int atk) {
	_hp = hp;
	_atk = atk;
}

void Enemy::damage(int damage)
{
	_hp -= damage;
}

bool Enemy::play(Enemy& enemy)
{
	cout << "＝＝＝＝＝＝ターン開始＝＝＝＝" << endl;

	playBase(enemy);
	cout << "敵の残りHP : " << enemy.get_hp() << endl;

	cout << "＝＝＝＝＝＝ターン終了＝＝＝＝" << endl;

	if (enemy.get_hp() <= 0) {
		cout << "敵を倒した！！！" << endl;
		return false;
	}
	else {
		return true;
	}

	
}
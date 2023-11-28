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
	cout << "^[Jn" << endl;

	playBase(enemy);
	cout << "GÌcèHP : " << enemy.get_hp() << endl;

	cout << "^[I¹" << endl;

	if (enemy.get_hp() <= 0) {
		cout << "Gð|µ½III" << endl;
		return false;
	}
	else {
		return true;
	}

	
}
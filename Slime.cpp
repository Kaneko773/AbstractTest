#include <iostream>
#include "Slime.h"

using namespace std;

void Slime::attack(Enemy& enemy)
{
	enemy.damage(1);
}

void Slime::playBase(Enemy& enemy)
{
	cout << "ƒXƒ‰ƒCƒ€‚Ì‘Ì“–‚½‚èI" << endl;
	attack(enemy);
}

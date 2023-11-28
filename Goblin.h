#pragma once
#include "Enemy.h"
class Goblin : public Enemy
{
public:
    Goblin();
    Goblin(int hp, int atk);

    void attack(Enemy& enemy) override;
    void playBase(Enemy& enemy) override;
};


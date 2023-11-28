#pragma once
#include "Enemy.h"
class Skeleton : public Enemy
{
public:
    Skeleton();
    Skeleton(int hp, int atk);

    void attack(Enemy& enemy) override;
    void playBase(Enemy& enemy) override;
};


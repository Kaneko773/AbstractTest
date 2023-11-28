#pragma once
#include "Enemy.h"
class Slime : public Enemy
{
public:
    void attack(Enemy& enemy) override;
    void playBase(Enemy& enemy) override;
};


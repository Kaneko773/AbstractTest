#pragma once

class Enemy
{
protected:
	int _hp;
	int _atk;

public:
	Enemy(int hp, int atk);

	virtual void attack(Enemy& enemy) = 0;
	virtual void playBase(Enemy& enemy) = 0;
	void damage(int damage);

	int get_hp() const{
		return _hp;
	}

	bool play(Enemy& enemy);
};


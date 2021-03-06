/*
 * Bandit.h
 *
 *  Created on: Mar 5, 2018
 *      Author: joel
 */

#ifndef COMBAT_ENEMIES_BANDIT_H_
#define COMBAT_ENEMIES_BANDIT_H_

#include "Enemy.h"
#include "../Weapons/Weapon.h"
#include "../Weapons/Sword.h"
#include <iostream>

namespace Combat {

class Bandit: public Enemy {
private:
	int Stats[5];
	std::string* weapons;
	Item::Weapon weps;
public:
	Bandit(double,std::string);
	double Attack();
	virtual ~Bandit();
};

} /* namespace Combat */

#endif /* COMBAT_ENEMIES_BANDIT_H_ */

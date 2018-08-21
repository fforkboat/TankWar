#include "AITankController.h"
USING_NS_CC;
bool AITankController::init() {
	//createAI();
	this->scheduleUpdate();
	return true;
}
/*void AITankController::createAI() {
	enemy = NULL;
	Sprite* spr = NULL;
	for (int i = 0; i < MAX_AI_NUM; i++) {
		enemy = AITank::create();
		int id = CCRANDOM_0_1() * 4;
		spr = Sprite::create(StringUtils::format("tank%d.png",id));
		m_listener->bindSprite(spr);
		m_listener->setVisible(false);
	}
}*/
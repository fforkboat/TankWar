#ifndef _AITANKCONTROLLER_H_
#define _AITANKCONTROLLER_H_
#include "cocos2d.h"
#include "Controller.h"
USING_NS_CC;
#define MAX_AI_NUM 10;
class AITankController :public MyController {
/*private:
	Vector<AITank*> Enemies;
	AITank* enemy;
	PlayerTank* player;
	void createAI();
	std::string tankString(int);*/
public:
	virtual bool init();
	CREATE_FUNC(AITankController);
	virtual void update(float dt);
	//void bindPlayerTank(PlayerTank*);
};
#endif

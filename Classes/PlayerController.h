#ifndef _PLAYERCONTROLLER_H_
#define _PLAYERCONTROLLER_H_
#include "cocos2d.h"
#include "Controller.h"
USING_NS_CC;
class PlayerController :public MyController {
public:
	virtual bool init();
	virtual void update(float dt);
	CREATE_FUNC(PlayerController);
	void setXSpeed(int);
	void setYSpeed(int);
	virtual void setDirection(int);
private:
	int direction;
	int iXspeed;
	int	iYspeed;
};
#endif

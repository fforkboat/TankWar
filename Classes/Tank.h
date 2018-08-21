#ifndef _TANK_H_
#define _TANK_H_
#include "cocos2d.h"
#include "Entity.h"
USING_NS_CC;
class Tank :public Entity {
public:
	virtual bool init();
	CREATE_FUNC(Tank);
	void setTiledMap(TMXTiledMap*);
	void setDirection(int);
	void registerListener();
	virtual void update(float dt);
	//virtual void setTagPosition(int x, int y);
private:
	TMXTiledMap* m_map;
	//TMXLayer* meta;
};
#endif

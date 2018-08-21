#ifndef _ENTITY_H_
#define _ENTITY_H_
#include "cocos2d.h"
USING_NS_CC;
class Entity :public Node{
public:
	void bindSprite(Sprite*);
	Sprite* getSprite();
	void setXSpeed(int);
	void setYSpeed(int);
	virtual void setDirection(int);
	virtual void setTagPosition(int, int);
	virtual Point getTagPosition();
protected:
	Sprite * m_sprite;
	int direction;
	int iXspeed;
	int	iYspeed;
};
#endif

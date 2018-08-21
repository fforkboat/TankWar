#ifndef _TOLLGATESCENE_H_
#define _TOLLGATESCENE_H_
#include "cocos2d.h"
USING_NS_CC;
class TollgateScene :public Layer {
public:
	virtual bool init();
	CREATE_FUNC(TollgateScene);
	static Scene* createScene();
	void addPlayer(TMXTiledMap*);
};
#endif

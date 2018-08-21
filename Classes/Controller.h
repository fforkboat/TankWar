#ifndef _CONTROLLER_H_
#define _CONTROLLER_H_
#include "cocos2d.h"
#include "ControllerListener.h"
USING_NS_CC;
class MyController :public Node {
protected:
	ControllerListener * m_listener;
public:
	void setControllerListener(ControllerListener*);
};
#endif

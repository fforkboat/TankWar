#include "Tank.h"
USING_NS_CC;
bool Tank::init() {
	iXspeed = 0;
	iYspeed = 0;
	direction = 1;
	this->scheduleUpdate();
	registerListener();
	return true;
}
void Tank::setTiledMap(TMXTiledMap* map) {
	m_map = map;
	//meta = m_map->getLayer("meta");
	map->addChild(this);
}
void Tank::update(float dt) {
	Point pos = this->getPosition();
	pos.x += iXspeed;
	pos.y += iYspeed;
	this->setPosition(Point(pos.x, pos.y));
}
void Tank::setDirection(int id) {
	if (direction != id) {
		direction = id;
		auto cache = SpriteFrameCache::getInstance();
		cache->addSpriteFramesWithFile("tanks.plist", "tanks.png");
		this->getSprite()->setSpriteFrame(cache->getSpriteFrameByName(StringUtils::format("tank%d.png", id)));
	}
}
void Tank::registerListener() {
	auto listener = EventListenerKeyboard::create();
	listener->onKeyPressed = [&](EventKeyboard::KeyCode keycode, Event* event) {
		switch (keycode) {
		case EventKeyboard::KeyCode::KEY_W:
			setYSpeed(2);
			setXSpeed(0);
			setDirection(1);
			break;
		case EventKeyboard::KeyCode::KEY_S:
			setYSpeed(-2);
			setXSpeed(0);
			setDirection(2);
			break;
		case EventKeyboard::KeyCode::KEY_A:
			setXSpeed(-2);
			setYSpeed(0);
			setDirection(3);
			break;
		case EventKeyboard::KeyCode::KEY_D:
			setXSpeed(2);
			setYSpeed(0);
			setDirection(4);
			break;
		}
	};
	listener->onKeyReleased = [&](EventKeyboard::KeyCode keycode, Event* event) {
		setXSpeed(0);
		setYSpeed(0);
	};
	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);
}
/*void Tank::setTagPosition(int x, int y) {
	Size tankSize = m_sprite->getContentSize();
	
}*/
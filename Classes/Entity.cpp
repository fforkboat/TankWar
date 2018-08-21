#include "Entity.h"
USING_NS_CC;
void Entity::bindSprite(Sprite* spr) {
	m_sprite = spr;
	this->addChild(m_sprite);
}
void Entity::setTagPosition(int x, int y) {
	this->setPosition(Point(x, y));
}
Point Entity::getTagPosition() {
	return this->getPosition();
}
Sprite* Entity::getSprite() {
	return m_sprite;
}
void Entity::setDirection(int id) {
	if (direction != id) {
		direction = id;
	}
}

void Entity::setXSpeed(int speed) {
	iXspeed = speed;
}
void Entity::setYSpeed(int speed) {
	iYspeed = speed;
}

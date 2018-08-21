#include "TollgateScene.h"
#include "Tank.h"
USING_NS_CC;
bool TollgateScene::init() {
	if (!Layer::init())
		return false;
	auto map = TMXTiledMap::create("map.tmx");
	this->addChild(map);
	addPlayer(map);
	return true;
}
Scene* TollgateScene::createScene() {
	auto scene = Scene::create();
	auto layer = TollgateScene::create();
	scene->addChild(layer);
	return scene;
}
void TollgateScene::addPlayer(TMXTiledMap* map) {
	auto objGroup = map->getObjectGroup("objects");
	auto playerMap = objGroup->getObject("PlayerPoint");
	float playerX = playerMap.at("x").asFloat();
	float playerY = playerMap.at("y").asFloat();
	auto player = Tank::create();
	auto spr = Sprite::create("tank1.png");
	player->bindSprite(spr);
	player->setPosition(playerX, playerY);
	player->setTiledMap(map);
}

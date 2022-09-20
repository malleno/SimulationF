#include "gamescene.h"
#include "QTimer"
#include "QMouseEvent"
#include "QDebug"

GameScene::GameScene(QWidget *parent) :
    QGraphicsScene(QRectF(0, 0, 1000, 800), parent),
    gameLoop_(new QTimer())
{
    setItemIndexMethod(GameScene::NoIndex);
    setupGameLoop();

}



void GameScene::setupGameLoop()
{
    connect(gameLoop_, SIGNAL(timeout()), this, SLOT(nextFrameSlot()));
    gameLoop_-> start(10);
}



void GameScene::nextFrameSlot()
{
    QList<QGraphicsItem*> itemsOnSceneList = this->items();
    for(QGraphicsItem* item : itemsOnSceneList){

        item;
    }
    emit update();
}

void GameScene::mouseRightButtonRelease(QPoint pos){
    addRectToScene(pos);
}

void GameScene::gameSpeedChange(int speedFacror)
{
    gameLoop_->setInterval(150 - speedFacror * 10);
}

void GameScene::addRectToScene(QPoint pos){
    QRectF rect(pos.x(),pos.y(), 20,20);
    this ->addRect(rect, QPen(), QBrush());
}

void GameScene::mouseLeftButtonMoved(QPoint pos){
    addRectToScene(pos);
}


void GameScene::addMaterial(QPoint pos){
    addRectToScene(pos);
}

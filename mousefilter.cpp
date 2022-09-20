#include "mousefilter.h"
#include "QEvent"
#include "QDebug"
#include "QMouseEvent"

MouseFilter::MouseFilter(QObject *parent, GameScene* game_scene) :
    QObject(parent),
    gamescene_(game_scene)
{ 
    connect(this, SIGNAL( mouseLeftButtonMoved(QPoint)),gamescene_, SLOT(mouseLeftButtonMoved(QPoint)));
    connect(this, SIGNAL( mouseRightButtonRelease(QPoint)),gamescene_, SLOT(mouseRightButtonRelease(QPoint)));
}


bool MouseFilter::eventFilter(QObject * obj, QEvent * event){
    if(event->type() == QEvent::MouseMove || event->type() == QEvent::MouseButtonPress){
        if(dynamic_cast<QMouseEvent*>(event)->buttons() == Qt::LeftButton){
            QPoint pos = dynamic_cast<QMouseEvent*>(event)->pos();
            emit mouseLeftButtonMoved(pos);
            return true;
        }
    }
    if(event->type() == QEvent::MouseButtonRelease){
        if(dynamic_cast<QMouseEvent*>(event)->button() == Qt::RightButton){
            QPoint pos = dynamic_cast<QMouseEvent*>(event)->pos();
            emit mouseRightButtonRelease(pos);
            return true;
        }
    }
    return false;

}

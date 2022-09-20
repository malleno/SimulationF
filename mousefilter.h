#pragma once

#include <QObject>
#include "gamescene.h"

class MouseFilter : public QObject
{
    Q_OBJECT
public:
    explicit MouseFilter(QObject *parent = nullptr, GameScene* = nullptr);

signals:
    void mouseLeftButtonMoved(QPoint);
    void mouseRightButtonRelease(QPoint);
protected:
    virtual bool eventFilter(QObject*, QEvent*);
private:
    GameScene* gamescene_;
};


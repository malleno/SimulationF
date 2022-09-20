#ifndef GAMESCENE_H
#define GAMESCENE_H

#include <QObject>
#include <QGraphicsScene>
#include <QWidget>


class GameScene : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit GameScene(QWidget *parent = nullptr);

signals:

public slots:
    void mouseLeftButtonMoved(QPoint pos);
    void mouseRightButtonRelease(QPoint pos);
    void gameSpeedChange(int);
    void nextFrameSlot();
    void addMaterial(QPoint);
private:
    void setupGameLoop();
private:
    QTimer*         gameLoop_;

    void addRectToScene(QPoint);
};

#endif // GAMESCENE_H

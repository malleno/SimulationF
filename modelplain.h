#ifndef MODELPLAIN_H
#define MODELPLAIN_H

#include <QObject>
#include <QGraphicsRectItem>

class modelPlain : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    explicit modelPlain(QObject *parent = nullptr);
    void updatePosition();
signals:

};

#endif // MODELPLAIN_H

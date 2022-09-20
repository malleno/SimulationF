#ifndef NEURONMODEL_H
#define NEURONMODEL_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class neuronmodel; }
QT_END_NAMESPACE

class NeuronModel : public QWidget
{
    Q_OBJECT

public:
    NeuronModel(QWidget *parent = nullptr);
    ~NeuronModel();

private:
    Ui::neuronmodel *ui;
};
#endif // NEURONMODEL_H

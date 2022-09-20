#include "neuronmodel.h"
#include "ui_neuronmodel.h"
#include "gamescene.h"
#include "mousefilter.h"

NeuronModel::NeuronModel(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::neuronmodel)
{
    ui->setupUi(this);
    ui->ViewOfScene->setScene(new GameScene());
     ui->ViewOfScene->viewport()->installEventFilter(new MouseFilter(ui->ViewOfScene,
                                                                     dynamic_cast<GameScene*>(ui->ViewOfScene->scene())));
}

NeuronModel::~NeuronModel()
{
    delete ui;
}


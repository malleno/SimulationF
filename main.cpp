#include "neuronmodel.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NeuronModel w;
    w.show();
    return a.exec();
}

#ifndef CONNECTOR_H
#define CONNECTOR_H

#include <QObject>
#include <QThread>
#include <QTcpSocket>
#include <QList>
#include "abstractinfoprocessor.h"

class Connector : public QThread,QTcpSocket
{
private:
    QList<AbstractInfoProcessor> Processors;
    quint16 DataLen = 1024;

    void assign(QString);
public:
    Connector(QObject *parent = nullptr);

    void run();
    void send();

    QList<AbstractInfoProcessor> getProcessors(){return Processors;}
};

#endif // CONNECTOR_H

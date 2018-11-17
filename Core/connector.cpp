#include "connector.h"

Connector::Connector(QObject *parent):QTcpSocket (parent){
}

void Connector::assign(const QString info){
    for (int i = 0; i < Processors.size();i++){
        Processors[i].process(info);
    }
}

void Connector::run(){
    while (true) {
        QThread::msleep(50);
        if (canReadLine()){
            QThread::msleep(50);
            char *cinfo = new char[DataLen];
            readLine(cinfo,DataLen);
            QString *info = new QString(cinfo);
            assign(*info);

            delete[] cinfo;
            delete info;
        }
    }
}

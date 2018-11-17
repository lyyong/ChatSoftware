#include "abstractinfoprocessor.h"

AbstractInfoProcessor::AbstractInfoProcessor(QObject *parent) : QObject(parent)
{

}

AbstractInfoProcessor::AbstractInfoProcessor(AbstractInfoCallback* callback)
    :QObject(nullptr){
    connect(this,SIGNAL(call(const QString)),callback,SLOT(callback(const QString)));
}



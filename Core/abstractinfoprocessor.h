#ifndef ABSTRACTINFOPROCESSOR_H
#define ABSTRACTINFOPROCESSOR_H

#include <QObject>
#include "abstractinfocallback.h"

class AbstractInfoProcessor : public QObject
{
    Q_OBJECT
public:
    explicit AbstractInfoProcessor(QObject *parent = nullptr);
    AbstractInfoProcessor(AbstractInfoCallback*);

    virtual void  process(const QString) = 0;

signals:
    void call(const QString);

public slots:
};

#endif // ABSTRACTINFOPROCESSOR_H

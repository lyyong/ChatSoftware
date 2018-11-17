#ifndef ABSTRACTMESSAGECODED_H
#define ABSTRACTMESSAGECODED_H

#include <QObject>

class AbstractMessageCoded : public QObject
{
    Q_OBJECT
public:
    explicit AbstractMessageCoded(QObject *parent = nullptr);

signals:

public slots:
};

#endif // ABSTRACTMESSAGECODED_H
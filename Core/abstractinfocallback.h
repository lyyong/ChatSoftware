#ifndef ABSTRACTINFOCALLBACK_H
#define ABSTRACTINFOCALLBACK_H

#include <QObject>

class AbstractInfoCallback : public QObject
{
    Q_OBJECT
public:
    explicit AbstractInfoCallback(QObject *parent = nullptr);

signals:

public slots:
    /**
     * 该函数由AbstractInfoProcessor中与call信号进行连接，
     * 但是emit call则由程序员自己决定
     * @brief callback
     * @param info
     */
    void callback(const QString info);
};

#endif // ABSTRACTINFOCALLBACK_H

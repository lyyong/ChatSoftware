#ifndef ABTRACTINTRODUCTION_H
#define ABTRACTINTRODUCTION_H

#include <QString>

class AbstractIntroduction
{
private:
    QString nickname;
    QString id;
public:
    AbstractIntroduction();

    void setNickname(QString nickname){this->nickname = nickname;}
    void setId(QString id){this->id = id;}
    QString getNickname(){return nickname;}
    QString getId(){return id;}
};

#endif // ABTRACTINTRODUCTION_H

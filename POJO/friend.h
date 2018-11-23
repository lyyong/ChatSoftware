#ifndef FRIEND_H
#define FRIEND_H

#include <QString>
#include "POJO/abstractintroduction.h"

class Friend : public AbstractIntroduction
{
private:
    QString remark;
    bool isChatting = false;
public:
    Friend();
    void setRemark(QString remark){this->remark = remark;}
    void setIsChatting(bool is){isChatting = is;}

    QString getRemark(){return remark;}
    bool getIsChatting(){return isChatting;}
};

#endif // FRIEND_H

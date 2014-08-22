#ifndef QOUTSLOT_H
#define QOUTSLOT_H

#include "qnode.h"

#include "qSlot.h"
#include "qinslot.h"

class qOutSlot : private qSlot
{
public:
    qOutSlot(QString id);

    QNode::ConnectionReturnStatus routeTo(qInSlot *destination);
    QNode::TransferReturnStatus transfer();

};

#endif // QOUTSLOT_H
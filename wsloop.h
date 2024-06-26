#ifndef WSLOOP_H
#define WSLOOP_H
#include <QObject>
#include "connection_metadata.h"

class wsloop:public QObject{
    Q_OBJECT
public:
    wsloop(QObject *partent = nullptr);

    void websocket_loop();
};
#endif // WSLOOP_H

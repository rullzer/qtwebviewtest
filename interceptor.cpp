#include <QDebug>

#include "interceptor.h"

Interceptor::Interceptor()
{

}

void Interceptor::interceptRequest(QWebEngineUrlRequestInfo &info) {
    qDebug() << info.requestUrl();
}

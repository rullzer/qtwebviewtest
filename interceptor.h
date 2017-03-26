#ifndef INTERCEPTOR_H
#define INTERCEPTOR_H

#include <QWebEngineUrlRequestInterceptor>
#include <QWebEngineUrlRequestInfo>

class Interceptor : public QWebEngineUrlRequestInterceptor
{
public:
    Interceptor();

    void interceptRequest(QWebEngineUrlRequestInfo &info);
};

#endif // INTERCEPTOR_H

#ifndef URLHANDLER_H
#define URLHANDLER_H

#include <QWebEngineUrlSchemeHandler>
#include <QWebEngineUrlRequestJob>

class URLHandler : public QWebEngineUrlSchemeHandler
{
public:
    URLHandler();

    void requestStarted(QWebEngineUrlRequestJob *request);
};

#endif // URLHANDLER_H

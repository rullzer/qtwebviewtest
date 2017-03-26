#include <QDebug>
#include <QUrl>

#include "urlhandler.h"

URLHandler::URLHandler()
{

}

void URLHandler::requestStarted(QWebEngineUrlRequestJob *request) {
    QUrl u = request->requestUrl();

    qDebug() << u.userName();
    qDebug() << u.password();
    qDebug() << u.host();

    request->fail(QWebEngineUrlRequestJob::UrlInvalid);
}

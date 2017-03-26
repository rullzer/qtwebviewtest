#include <QApplication>
#include <QWebEngineView>
#include <QWebEngineProfile>
#include <QWebEnginePage>

#include "interceptor.h"
#include "urlhandler.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication app(argc, argv);

    QWebEngineView view;

    QWebEngineProfile *profile = new QWebEngineProfile();
    QWebEnginePage *page = new QWebEnginePage(profile);
    page->setUrl(QUrl(QStringLiteral("http://localhost/foo.html")));

    URLHandler *ul = new URLHandler();
    profile->installUrlSchemeHandler("amx", ul);

    view.setPage(page);
    view.show();

    return app.exec();
}

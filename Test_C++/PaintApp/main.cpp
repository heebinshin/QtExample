#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlEngine>

#include <QQmlContext>

#include "./C++/paintexam.h"
#include <QtQuick/QQuickView>

#include <QPicture>
#include <QPainter>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);
    qmlRegisterType<PaintExam>("MyPaint", 1, 0, "PaintExam");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    //PaintExam paintexam;

    QScopedPointer<PaintExam> mouse(new PaintExam);

    engine.rootContext()->setContextProperty("mouse", mouse.data());
    engine.rootContext()->setContextProperty("draw", mouse.data());
    //engine.rootContext()->setContextProperty("_Tools", &paintexam);

    return app.exec();
}
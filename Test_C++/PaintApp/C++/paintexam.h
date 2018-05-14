#ifndef PAINTEXAM_H
#define PAINTEXAM_H

#include <QtQuick/QQuickPaintedItem>
#include <QColor>
#include <QPainter>
#include <QObject>
#include <QDebug>
#include <QPoint>

class PaintExam : public QQuickPaintedItem
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QColor color READ color WRITE setColor)

public:
    PaintExam(QQuickItem *parent = 0);

    QString name() const;
    void setName(const QString &name);

    QColor color() const;
    void setColor(const QColor &color);

    Q_INVOKABLE void paint(QPainter *painter);

    Q_INVOKABLE void cleardraw();

    Q_INVOKABLE void test();

    Q_INVOKABLE void mousePress(double x, double y);
    Q_INVOKABLE void mouseRelease(double x, double y);

    bool mousePressed;
    bool drawStarted;

signals:
    void drawCleared();
    void someSignal(const QString &text);

protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    Q_INVOKABLE void paintEvent(QPaintEvent *event);

public slots:
    void Tool_Mode(const int &text);
    void on_btnLine_clicked();
    void on_btnRect_clicked();

private:
    QString m_name;
    QColor m_color;
    QPainter painter;
    QPixmap mPix;
    QLine mLine;
    QRect mRect;

    int ToolMode = 0;

};

#endif // PAINTEXAM_H

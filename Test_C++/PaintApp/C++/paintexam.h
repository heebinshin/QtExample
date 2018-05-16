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
    Q_PROPERTY(QColor color READ color WRITE setColor)
    Q_PROPERTY(int toolMode READ toolMode WRITE setToolMode)


public:
    PaintExam(QQuickItem *parent = 0);

    QColor color() const;
    void setColor(const QColor &color);

    int toolMode() const;
    void setToolMode(const int &toolMode);

    void paint(QPainter *painter);

    Q_INVOKABLE void startPoint(const double &x, const double &y);
    Q_INVOKABLE void movePoint(const double &x, const double &y);
    Q_INVOKABLE void movingPoint(const double &x, const double &y);
    Q_INVOKABLE void endPoint(const double &x, const double &y);
    Q_INVOKABLE void radiusEdit(const int &radius);

public slots:

private:
    QColor m_color;
    QPoint m_startPoint;
    QPoint m_movePoint;
    QPoint m_endPoint;
    int m_toolMode;
    int m_radius;

};

#endif // PAINTEXAM_H

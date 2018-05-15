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
    Q_PROPERTY(int width READ width WRITE setWidth)
    Q_PROPERTY(int height READ height WRITE setHeight)
    Q_PROPERTY(double x READ x WRITE setX)
    Q_PROPERTY(double y READ y WRITE setY)
    Q_PROPERTY(int toolmode READ toolmode WRITE setToolmode)


public:
    PaintExam(QQuickItem *parent = 0);

    QString name() const;
    void setName(const QString &name);

    QColor color() const;
    void setColor(const QColor &color);

    int width() const;
    void setWidth(const int &width);

    int height() const;
    void setHeight(const int &height);

    double x() const;
    void setX(const double &x);

    double y() const;
    void setY(const double &y);

    int toolmode() const;
    void setToolmode(const int &ToolMode);

    Q_INVOKABLE void paint(QPainter *painter);

    Q_INVOKABLE void cleardraw();

signals:
    void someSignal(const QString &text);
    void colorChanged();
    void widthChanged();
    void heightChanged();
    void xChanged();
    void yChanged();
    void toolmodeChanged();

public slots:
    void Tool_Mode(const int &text);

private:
    QString m_name;
    QColor m_color;
    int m_height;
    int m_width;
    double m_pressX;
    double m_pressY;
    int m_ToolMode;

};

#endif // PAINTEXAM_H

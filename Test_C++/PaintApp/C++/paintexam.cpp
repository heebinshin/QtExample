#include "paintexam.h"
#include <QPainter>



PaintExam::PaintExam(QQuickItem *parent) : QQuickPaintedItem(parent)
{
}

//////////////////////////////////////////////////////////////////////////// color
QColor PaintExam::color() const
{
    return m_color;
}

void PaintExam::setColor(const QColor &color)
{
    if (color != m_color) {
        m_color = color;
        update();
    }
}


//////////////////////////////////////////////////////////////////////////// paint

void PaintExam::paint(QPainter *painter)
{
    QPen pen_r(m_color, 2);

    QRect rectangle_(m_startPoint, m_endPoint);
    painter->setPen(pen_r);

    switch (m_toolMode) {
    case 1:
        painter->drawRect(rectangle_);
        break;
    case 2:
        painter->drawEllipse(rectangle_);
        break;
    case 3:
        painter->drawLine(m_startPoint, m_movePoint);
        painter->drawLine(m_movePoint, m_endPoint);
        painter->drawLine(m_endPoint, m_startPoint);
        break;
    case 4:
        painter->drawLine(m_startPoint, m_endPoint);
        break;
    case 5:
        painter->drawRoundedRect(rectangle_, m_radius, m_radius);
    default:
        break;
    }
}

//////////////////////////////////////////////////////////////////////////// point for draw

void PaintExam::startPoint(const double &x, const double &y)
{
    QPoint setPoint(x,y);
    m_startPoint = setPoint;
}

void PaintExam::movePoint(const double &x, const double &y)
{
    QPoint setPoint(x,y);
    m_movePoint = setPoint;
}

void PaintExam::movingPoint(const double &x, const double &y)
{
    QPoint setPoint(x,y);
    m_endPoint = setPoint;
    m_color = "pink";
    update();
}

void PaintExam::endPoint(const double &x, const double &y)
{
    QPoint setPoint(x,y);
    m_endPoint = setPoint;
    m_color = "black";
    update();
}

//////////////////////////////////////////////////////////////////////////// rounded-Square radius

void PaintExam::radiusEdit(const int &radius)
{
    m_radius = radius;
}

//////////////////////////////////////////////////////////////////////////// toolmode

int PaintExam::toolMode() const
{
    return m_toolMode;
}

void PaintExam::setToolMode(const int &toolMode)
{
    if(toolMode != m_toolMode) {
        m_toolMode = toolMode;
        update();
    }
}

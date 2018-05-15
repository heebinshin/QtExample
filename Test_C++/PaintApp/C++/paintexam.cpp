#include "paintexam.h"
#include <QPainter>



PaintExam::PaintExam(QQuickItem *parent) : QQuickPaintedItem(parent)
{
}

//////////////////////////////////////////////////////////////////////////// name, color

QString PaintExam::name() const
{
    return m_name;
}

void PaintExam::setName(const QString &name)
{
    m_name = name;
}

QColor PaintExam::color() const
{
    return m_color;
}

void PaintExam::setColor(const QColor &color)
{
    if (color != m_color) {
        m_color = color;
        update();   // repaint with the new color
        emit colorChanged();
    }
}

//////////////////////////////////////////////////////////////////////////// width, height

int PaintExam::width() const
{
    return m_width;
}

void PaintExam::setWidth(const int &width)
{
    if(width != m_width) {
        m_width = width;
        update();
        emit widthChanged();
    }
}

int PaintExam::height() const
{
    return m_height;
}

void PaintExam::setHeight(const int &height)
{
    if(height != m_height) {
        m_height = height;
        update();
        emit heightChanged();
    }
}

//////////////////////////////////////////////////////////////////////////// x,y

double PaintExam::x() const
{
    return m_pressX;
}

void PaintExam::setX(const double &x)
{
    m_pressX = x;
}

double PaintExam::y() const
{
    return m_pressY;
}

void PaintExam::setY(const double &y)
{
    m_pressY = y;
}

//////////////////////////////////////////////////////////////////////////// toolmode

int PaintExam::toolmode() const
{
    return m_ToolMode;
}

void PaintExam::setToolmode(const int &ToolMode)
{
    if(ToolMode != m_ToolMode) {
        m_ToolMode = ToolMode;
        update();
        emit toolmodeChanged();
    }
}

//////////////////////////////////////////////////////////////////////////// paint

void PaintExam::paint(QPainter *painter)
{
    QPen pen(m_color, 1);
    painter->setPen(pen);

    switch (m_ToolMode) {
    case 1:
        painter->drawRect(m_pressX, m_pressY, m_width, m_height);
        break;
    case 2:
        painter->drawEllipse(m_pressX, m_pressY, m_width, m_height);
        break;
    case 3:
        painter->drawLine(m_pressX, m_height + m_pressY, m_pressX + (m_width)/2, m_pressY);
        painter->drawLine(m_pressX + (m_width)/2, m_pressY, m_pressX + m_width, m_pressY + m_height);
        painter->drawLine(m_pressX, m_height + m_pressY, m_pressX + m_width, m_pressY + m_height);
        break;
    case 4:
        painter->drawLine(m_pressX, m_pressY, m_width + m_pressX, m_height + m_pressY);
        break;
    case 5:
        painter->drawRoundedRect(m_pressX, m_pressY, m_width, m_height,30, 30);
        break;
    case 6:
        painter->drawPoint(m_pressX, m_pressY);
        break;
    default:
        break;
    }
}

void PaintExam::Tool_Mode(const int &text)
{
    m_ToolMode = text;
    qDebug() << m_ToolMode;
}

//////////////////////////////////////////////////////////////////////////// clear

void PaintExam::cleardraw()
{
    setColor(QColor(Qt::transparent));  //clear
    update();
}


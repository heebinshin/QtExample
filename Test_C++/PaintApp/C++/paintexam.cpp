#include "paintexam.h"
#include <QPainter>



PaintExam::PaintExam(QQuickItem *parent) : QQuickPaintedItem(parent)
{
    mPix = QPixmap(400, 400);
    mPix.fill(Qt::white);

    mousePressed = false;
    drawStarted = false;

    ToolMode = 4;
}

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
    m_color = color;
}

void PaintExam::paint(QPainter *painter)
{
    QPen pen(m_color, 1);
    painter->setPen(pen);

    painter->drawEllipse(0,0,100,100);

}

void PaintExam::Tool_Mode(const int &text)
{
    ToolMode = text;
    qDebug() << ToolMode;
}

void PaintExam::cleardraw()
{

    setColor(QColor(Qt::transparent));  //clear
    update();

    emit drawCleared();
}

//////////////////////////////////////////////////////////// mouse

void PaintExam::test()
{
    qDebug() << "Hello from C++";
}

void PaintExam::mousePress(double x, double y)
{
    QPoint m_press(x,y);
    qDebug() << "press : " << m_press;
}

void PaintExam::mouseRelease(double x, double y)
{
    QPoint m_release(x,y);
    qDebug() << "release : " << m_release;
}



//////////////////////////////////////////////////////////// paint

void PaintExam::on_btnLine_clicked()
{
    ToolMode = 4;
}

void PaintExam::on_btnRect_clicked()
{
    ToolMode = 1;
}


void PaintExam::mousePressEvent(QMouseEvent *event)
{
    mousePressed = true;

    if(ToolMode == 1){
        mRect.setTopLeft(event->pos());
        mRect.setBottomRight(event->pos());
    }
    else if(ToolMode == 4){
        mLine.setP1(event->pos());
        mLine.setP2(event->pos());
    }
}

void PaintExam::mouseMoveEvent(QMouseEvent *event)
{
    if(event->type() == QEvent::MouseMove){
        if(ToolMode == 1){
            mRect.setBottomRight(event->pos());
        }
        else if(ToolMode == 4)
            mLine.setP2(event->pos());
    }
    update();
}

void PaintExam::mouseReleaseEvent(QMouseEvent *event)
{
    mousePressed = false;
    update();
}

void PaintExam::paintEvent(QPaintEvent *event)
{
    if(mousePressed){
        painter.drawPixmap(0, 0, mPix);
        if(ToolMode == 1){
            painter.drawRect(mRect);
        }
        else if(ToolMode == 4){
            painter.drawLine(mLine);
        }

        drawStarted = true;
    }

    else if(drawStarted){
        QPainter tempPainter(&mPix);
        if(ToolMode == 1){
            tempPainter.drawRect(mRect);
        }
        else if(ToolMode == 4){
            tempPainter.drawLine(mLine);
        }

        painter.drawPixmap(0, 0, mPix);
    }

    painter.end();
}




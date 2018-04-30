import QtQuick 2.10
import QtQuick.Window 2.10

Window {
    id: window
    visible: true
    width: 500; height: 400

    Text {
        id: status
        anchors.top: canvas2.top
        //horizontalAlignment: Text.AlignHCenter
    }



    Menubar {id: menubar}
    Toolbar {id: toolbar}
    Canvas {
        id: canvas2

        anchors {
            left: parent.left
            right: parent.right
            top: toolbar.bottom
            bottom: parent.bottom
            margins: 8
        }

        property real lastX
        property real lastY

        onPaint: {

            var ctx = getContext("2d")
            ctx.lineWidth = 1.5
            ctx.strokeStyle = "blue"
            ctx.beginPath()
            ctx.moveTo(lastX, lastY)
            lastX = area.mouseX
            lastY = area.mouseY
            ctx.lineTo(lastX, lastY)
            ctx.stroke()
        }

        MouseArea {
            id: area
            visible: false

            anchors.fill: canvas2
            onPressed: {
                canvas2.lastX = mouseX
                canvas2.lastY = mouseY
            }
            onPositionChanged: {
                canvas2.requestPaint()
            }
        }
    }

    Canvas {
        id: canvas3
        visible: false

        anchors {
            left: parent.left
            right: parent.right
            top: toolbar.bottom
            bottom: parent.bottom
            margins: 8
        }

        onPaint: {

            var ctx = getContext("2d")
            ctx.drawImage('assets/ball.png', 10, 10)
            ctx.save()
            ctx.strokeStyle = '#ff2a68'
            ctx.beginPath()
            ctx.moveTo(110, 10)
            ctx.lineTo(155, 10)
            ctx.lineTo(135, 55)
            ctx.closePath()

            ctx.clip()
            ctx.drawImage('assets/ball.png', 100, 10)
            ctx.stroke()
            ctx.restore()

        }

        Component.onCompleted: {
            loadImage("assets/ball.png")
        }
    }


}

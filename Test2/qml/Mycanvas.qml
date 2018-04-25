import QtQuick 2.10
import QtQuick.Window 2.10


Canvas {
    id: canvas



    anchors {
        left: parent.left
        right: parent.right
        top: toolbar.bottom
        bottom: parent.bottom
        margins: 8
    }

    property real lastX
    property real lastY

    function clear() {
        var ctx = getContext('2d')
        ctx.reset()
        canvas.requestPaint()
    }

    Image {
        id: image
        anchors.fill: canvas
    }

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
}




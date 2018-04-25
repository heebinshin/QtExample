import QtQuick 2.10
import QtQuick.Window 2.10


Canvas {
    id: canvas

    property string imagefile: ""
    onImagefileChanged: {
        if(canvas.imagefile.length != 0)
        loadImage(canvas.imagefile)
        canvas.requestPaint()
    }

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

    onPaint: {

        var ctx = getContext("2d")
        if(isImageLoaded(canvas.imagefile)){
            ctx.drawImage(canvas.imagefile, 0, 0)
        }

        ctx.lineWidth = 1.5
        ctx.strokeStyle = "blue"
        ctx.beginPath()
        ctx.moveTo(lastX, lastY)
        lastX = area.mouseX
        lastY = area.mouseY
        ctx.lineTo(lastX, lastY)
        ctx.stroke()
    }

    onImageLoaded: requestPaint()
}




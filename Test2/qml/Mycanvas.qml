import QtQuick 2.10
import QtQuick.Window 2.10


Canvas {
    id: canvas

    property int saveopenmode: 0
    property int savemode: 1
    property int openmode: 2
    property string imagefilepath: ""
    property string imagefilepathsave: ""

    onImagefilepathChanged: {
        if(saveopenmode == savemode){
            for(var i = 0 ; i < canvas.imagefilepath.length - 8 ; i++ ) {
                canvas.imagefilepathsave += canvas.imagefilepath[i+8]
            }
            canvas.save(canvas.imagefilepathsave)
            imagefilepathsave = ""
        }

        else if(saveopenmode == openmode) {
            if(canvas.imagefilepath.length != 0)
            loadImage(canvas.imagefilepath)
        }
        canvas.requestPaint()
    }

    anchors {
        left: parent.left
        right: parent.right
        top: toolbar.bottom
        bottom: parent.bottom
        margins: 5
    }

    property real lastX
    property real lastY

    function clear() {
        unloadImage(canvas.imagefilepath)
        canvas.imagefilepath = ""
        var ctx = getContext('2d')
        ctx.reset()
        canvas.requestPaint()
    }

    onPaint: {
        var ctx = getContext("2d")
        if(isImageLoaded(canvas.imagefilepath)){
            ctx.reset()
            ctx.drawImage(canvas.imagefilepath, 0, 0)
            unloadImage(canvas.imagefilepath)
        }

        ctx.lineWidth = 1.5
        ctx.strokeStyle = "green"
        ctx.beginPath()
        ctx.moveTo(lastX, lastY)
        lastX = area.mouseX
        lastY = area.mouseY
        ctx.lineTo(lastX, lastY)
        ctx.stroke()
    }

    onImageLoaded: requestPaint()
}




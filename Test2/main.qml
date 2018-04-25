import QtQuick 2.10
import QtQuick.Window 2.10

import "qml"

Window {
    id: window
    visible: true
    width: 500
    height: 500

    Text {
        id: status
        anchors.top: canvas.top
    }

    Menubar {id: menubar}
    Toolbar {id: toolbar}
    Mycanvas {id: canvas}

    Image {
        id: image
        anchors.fill: area
    }

    MouseArea {
        id: area
        visible: false

        anchors.fill: canvas
        onPressed: {
            canvas.lastX = mouseX
            canvas.lastY = mouseY
        }
        onPositionChanged: {
            canvas.requestPaint()
        }
    }
}

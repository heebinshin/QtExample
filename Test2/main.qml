import QtQuick 2.10
import QtQuick.Window 2.10
import QtQuick.Dialogs 1.2
import QtQuick.Controls 2.2
import Qt.labs.folderlistmodel 2.0

import "qml"


Window {
    id: window
    visible: true
    width: 555
    height: 500

    FileDialog {
        id: fileDialog
        title: "Choice a image"
        nameFilters : "*.png , *.jpg , *.gif"
        folder: "file:///e:/Test/Test2/saveImage"
        onAccepted: {
            fileDialog.folder = fileUrl
            canvas.imagefilepath = fileDialog.fileUrl
        }
    }

    Text {
        id: status
        anchors.top: canvas.top
    }

    Menubar {id: menubar}
    Toolbar {id: toolbar}
    Mycanvas {id: canvas}


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

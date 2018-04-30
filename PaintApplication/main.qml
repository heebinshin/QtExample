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
        folder: "file:///e:/Test/PaintApplication/saveImage"
        onAccepted: {
            fileDialog.folder = fileUrl
            canvas.imagefilepath = fileDialog.fileUrl
            canvas.saveopenmode = canvas.undoopenmode
        }
    }

    Text {
        id: status
        anchors.top: canvas.top
    }

    Menubar {id: menubar}
    Toolbar {id: toolbar}
    Mycanvas {id: canvas}
}

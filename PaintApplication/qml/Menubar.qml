import QtQuick 2.10

Rectangle {
    id: menus
    anchors.top: parent.top
    anchors.left: parent.left
    anchors.right: parent.right
    height: 40
    border.color: Qt.darker(color)

    Rectangle {

        anchors.fill: parent
        anchors.topMargin: 1


        Button {
            id: savebutton
            width: 50; height: 38
            anchors.left: parent.left
            text: "save"
            onPressed: {
                canvas.saveopenmode = canvas.savemode
                canvas.imagefilepath = ""
            }

            onClicked: {
                status.text = "save success!" // save 버튼 기능 수행
                fileDialog.selectExisting = false
                fileDialog.open()
            }
        }

        Button {
            id: openbutton
            width: 50; height: 38
            anchors.left: savebutton.right
            text: "open"
            onPressed: {
                canvas.saveopenmode = canvas.openmode
                canvas.imagefilepath = ""
            }

            onClicked: {
                status.text = "open!" //open 버튼 기능 수행
                fileDialog.selectExisting = true
                fileDialog.open();
            }
        }

        Button {
            id: exitbutton
            width: 50; height: 38
            anchors.left: openbutton.right
            text: "exit"
            onClicked: {
                console.log("exit")
                window.close() // or Qt.quit()
            }
        }

        Button {
            id: clearbutton
            width: 50; height: 38
            anchors.left: exitbutton.right
            text: "clear"
            onClicked: {
                canvas.clear()
                console.log("canvas clear")
                canvas.imagelog()
            }
        }

        Button {
            id: undobutton
            width: 50; height: 38
            anchors.left: clearbutton.right
            text: "undo"
            onClicked: {
                console.log("undo")
                canvas.clear()
                canvas.imagecount--
                if(canvas.imagecount == 0)
                    canvas.imagecount++
                canvas.saveopenmode = canvas.openmode
                canvas.imagefilepath = canvas.undoimage[canvas.imagecount]
            }
        }

        Button {
            id: redobutton
            width: 50; height: 38
            anchors.left: undobutton.right
            text: "redo"
            onClicked: {
                console.log("redo")
                canvas.clear()
                canvas.imagecount++
                if(canvas.imagecount >= canvas.undoimage.length)
                            canvas.imagecount--
                canvas.saveopenmode = canvas.openmode
                canvas.imagefilepath = canvas.undoimage[canvas.imagecount]
            }
        }
    }
}



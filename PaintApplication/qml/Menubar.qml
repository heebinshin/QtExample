import QtQuick 2.10

Rectangle {
    id: menubar
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
                savebutton.color = "lightgrey"
                canvas.imagefilePath = ""
                canvas.menuMode = canvas.saveMode
            }
            onReleased: {
                savebutton.color = "white"
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
                openbutton.color = "lightgrey"
                canvas.imagefilePath = ""
                canvas.menuMode = canvas.openMode
            }
            onReleased: {
                openbutton.color = "white"
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
            onPressed: {
                exitbutton.color = "lightgrey"
            }
            onReleased: {
                exitbutton.color = "white"
            }
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
            onPressed: {
                clearbutton.color = "lightgrey"
            }
            onReleased: {
                clearbutton.color = "white"
            }
            onClicked: {
                canvas.undoclick()
                canvas.clearCanvas()
                console.log("canvas clear")
                canvas.imageCount++
                canvas.imagelog()
            }
        }

        Button {
            id: undobutton
            width: 50; height: 38
            anchors.left: clearbutton.right
            text: "undo"
            onPressed: {
                undobutton.color = "lightgrey"
            }
            onReleased: {
                undobutton.color = "white"
            }
            onClicked: {
                canvas.undoclick()
                console.log("undo")
                if(canvas.imageCount >= canvas.undoImages.length) {
                canvas.imageCount--
                }
                canvas.imageCount--
                if(canvas.imageCount < 0){
                    canvas.imageCount++
                }
                if(canvas.imageCount > 0 && canvas.undoImages[canvas.imageCount] === undefined)
                    canvas.imageCount--
                canvas.undoBt()
            }
        }

        Button {
            id: redobutton
            width: 50; height: 38
            anchors.left: undobutton.right
            text: "redo"
            onPressed: {
                redobutton.color = "lightgrey"
            }
            onReleased: {
                redobutton.color = "white"
            }
            onClicked: {
                console.log("redo")
                canvas.imageCount++
                if(canvas.imageCount >= canvas.undoImages.length){
                            canvas.imageCount--
                }
                if(canvas.imageCount > 0 && canvas.undoImages[canvas.imageCount] === undefined)
                    canvas.imageCount++
                canvas.undoBt()
            }
        }
    }
}



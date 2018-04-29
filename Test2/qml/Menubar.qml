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

                //console.log("save image")
                //url = canvas.toDataURL("image/png") 방식으로 undo 기능 만들어보기              
                //canvas.save("E:/Test/Test2/saveImage/Image.png")
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
                //console.log("open image")
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
            }
        }
    }
}



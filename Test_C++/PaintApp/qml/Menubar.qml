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
        anchors.leftMargin: 1
        anchors.rightMargin: 1

        Menubutton {
            id: savebutton
            width: 50; height: 38
            anchors.left: parent.left
            text: "save"
            onPressed: canvas.menuMode = canvas.saveMode
            onClicked: status.text = "save success!" // save 버튼 기능 수행
        }

        Menubutton {
            id: openbutton
            width: 50; height: 38
            anchors.left: savebutton.right
            text: "open"
            onPressed: canvas.menuMode = canvas.openMode
            onClicked: status.text = "open!" //open 버튼 기능 수행
        }

        Menubutton {
            id: exitbutton
            width: 50; height: 38
            anchors.left: openbutton.right
            text: "exit"
            onClicked: window.close() // or Qt.quit()
        }

        Menubutton {
            id: clearbutton
            width: 50; height: 38
            anchors.left: exitbutton.right
            text: "clear"
            onClicked: {console.log("canvas clear"); canvas.clearDraw()}
        }

        Menubutton {
            id: undobutton
            width: 50; height: 38
            anchors.left: clearbutton.right
            text: "undo"
            onClicked: ;
        }

        Menubutton {
            id: redobutton
            width: 50; height: 38
            anchors.left: undobutton.right
            text: "redo"
            onClicked: ;
        }
    }
}



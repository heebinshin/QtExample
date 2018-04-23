import QtQuick 2.10


Row {
    id: menutools

    Button {
        id: openbutton
        width: 40; height: 30
        color: "white"
        border.color: Qt.darker(color)
        text: "open"

        onClicked: {
            status.text = "open!" //open 버튼 기능 수행
            //canvas.visible = false
            canvas3.visible = true
        }
    }

    Button {
        id: savebutton
        width: 40; height: 30
        color: "white"
        border.color: Qt.darker(color)
        text: "save"
        onClicked: {
            status.text = "save success!" // save 버튼 기능 수행
//            canvas.save()
        }
    }

    Button {
        id: exitbutton
        width: 40; height: 30
        color: "white"
        border.color: Qt.darker(color)
        text: "exit"
        onClicked: {
            Qt.quit()
        }
    }
}


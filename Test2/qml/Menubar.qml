import QtQuick 2.10

Row {
    id: menus

    Button {
        id: savebutton
        width: 40; height: 30
        color: "white"
        border.color: Qt.darker(color)
        text: "save"
        onClicked: {
            status.text = "save success!" // save 버튼 기능 수행
            console.log("save image")
            //url = canvas.toDataURL("image/png") 방식으로 undo 기능 찾아보기
            canvas.save("E:/Test/Test2/saveImage/Image.png")
        }
    }

    Button {
        id: openbutton
        width: 40; height: 30
        color: "white"
        border.color: Qt.darker(color)
        text: "open"

        onClicked: {
            status.text = "open!" //open 버튼 기능 수행
            console.log("open image")
            fileDialog.open();
        }
    }

    Button {
        id: exitbutton
        width: 40; height: 30
        color: "white"
        border.color: Qt.darker(color)
        text: "exit"
        onClicked: {
            console.log("exit")
            window.close() // or Qt.quit()
        }
    }

    Button {
        id: clearbutton
        width: 40; height: 30
        color: "white"
        border.color: Qt.darker(color)
        text: "clear"
        onClicked: {
            canvas.clear()
            console.log("canvas clear")
            canvas.unloadImage(canvas.imagefile)
            canvas.imagefile = ""
        }
    }
}

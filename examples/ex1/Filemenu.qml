import QtQuick 2.10

Row {
    id: row        

    Button {
        id: openbutton
        text: "open"
        onClicked: {
            status.text = "open!"
        }
    }

    Button {
        id: savebutton
        text: "save"
        onClicked: {
            status.text = "save!"
        }
    }

    Button {
        id: exitbutton
        text: "exit"
        onClicked: {
            Qt.quit()
        }
    }
}


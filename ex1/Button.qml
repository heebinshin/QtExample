import QtQuick 2.10

Rectangle {
    id: menubutton
    property alias text: label.text
    signal clicked

    Text {
        id: label
        anchors.centerIn: parent
        text: menubutton.text
    }

    MouseArea {
        anchors.fill: menubutton
        onClicked: {
            menubutton.clicked()
        }
    }
}

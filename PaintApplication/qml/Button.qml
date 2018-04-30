import QtQuick 2.10

Rectangle {
    id: menubutton
    property alias text: label.text
    signal clicked
    signal pressed

    Text {
        id: label
        anchors.centerIn: parent
        text: menubutton.text
    }

    MouseArea {
        anchors.fill: menubutton
        onPressed: menubutton.pressed()
        onClicked: menubutton.clicked()
    }
}

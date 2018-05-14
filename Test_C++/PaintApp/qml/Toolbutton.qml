import QtQuick 2.10

Rectangle {
    id: toolbutton
    property alias text: label.text
    signal clicked
    signal pressed
    signal released

    Text {
        id: label
        anchors.centerIn: parent
        text: parent.text
    }

    MouseArea {
        anchors.fill: parent
        onPressed: parent.pressed()
        onReleased: {
            parent.color = "white"
            parent.released()
        }
        onClicked: {
            parent.color = "lightblue"
            parent.clicked()
        }
    }
}

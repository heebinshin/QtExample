import QtQuick 2.10

Rectangle {
    id: button
    property alias text: label.text
    signal clicked
    signal pressed
    signal released
    property var btcolor: "white"

    Text {
        id: label
        anchors.centerIn: parent
        text: parent.text
    }

    MouseArea {
        anchors.fill: parent
        onPressed: parent.pressed()
        onReleased: parent.released()
        onClicked: parent.clicked()
    }
}

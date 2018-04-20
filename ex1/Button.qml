import QtQuick 2.10

Rectangle {
    id: root
    property alias text: label.text
    signal clicked

    width: 40; height: 30
    color: "lightsteelblue"
    border.color: Qt.lighter(color)

    Text {
        id: label
        anchors.centerIn: parent
        text: "Start"
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            root.clicked()
        }
    }
}

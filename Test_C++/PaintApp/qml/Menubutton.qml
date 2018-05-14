import QtQuick 2.10

Rectangle {
    id: menubutton
    property alias text: label.text
    signal clicked
    signal pressed
    signal released
    property string btcolor: "white"

    color: btcolor
    Text {
        id: label
        anchors.centerIn: parent
        text: parent.text
    }

    MouseArea {
        anchors.fill: parent
        onPressed: {
            parent.pressed()
            btcolor = "lightgrey"
        }
        onReleased: {
            parent.released()
            btcolor = "white"
        }
        onClicked: parent.clicked()
    }
}

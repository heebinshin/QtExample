import QtQuick 2.10
import QtQuick.Window 2.10

Window {
    id: window
    visible: true
    width: 320
    height: 480

    Filemenu {}

    Text {
        id: status
        anchors.centerIn: parent
        horizontalAlignment: Text.AlignHCenter
    }
}

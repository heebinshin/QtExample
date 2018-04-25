import QtQuick 2.10


Row {
    id: tools
    anchors {
        left: parent.left
        top: menubar.bottom
        topMargin: 3
    }

    Button {
        id: square
        color: "white"
        border.color: Qt.darker(color)
        width: 80; height: 55

        Rectangle {
            id: squareRectangle
            width: 30; height: 30
            anchors.centerIn: square
            color:  "steelblue"
            border.color: "#4a50c3"
        }

        onClicked: {
            status.text = "square" //square 버튼 기능 수행
            area.visible = false
        }
    }

    Button {
        id: circle
        color: "white"
        border.color: Qt.darker(color)
        width: 80; height: 55
        Rectangle {
            id: circleRectangle
            width: 30; height: 30
            anchors.centerIn: circle
            color: "steelblue"
            border.color: "#4a50c3"
            radius: 14
        }

        onClicked: {
            status.text = "circle" //circle 버튼 기능 수행
            area.visible = false
        }
    }

    Button {
        id: triangle
        color: "white"
        border.color: Qt.darker(color)
        width: 80; height: 55
        Canvas {
            id: triangleCanvas
            anchors.centerIn: triangle
            width: 30; height: 30
            onPaint: {
                var ctx = getContext("2d")
                ctx.lineWidth = 1
                ctx.strokeStyle = "#4a50c3"
                ctx.fillStyle = "steelblue"
                ctx.beginPath()
                ctx.moveTo(15, 5)
                ctx.lineTo(0, 30)
                ctx.lineTo(0, 30)
                ctx.lineTo(30, 30)
                ctx.closePath()
                ctx.fill()
                ctx.stroke()
            }
        }

        onClicked: {
            status.text = "triangle" //triangle 버튼 기능 수행
            area.visible = false
        }
    }

    Button {
        id: line
        color: "white"
        border.color: Qt.darker(color)
        width: 80; height: 55
        Canvas {
            id: lineCanvas
            anchors.centerIn: line
            width: 30; height: 30
            onPaint: {
                var ctx = getContext("2d")
                ctx.lineWidth = 1
                ctx.strokeStyle = "#4a50c3"
                ctx.fillStyle = "steelblue"
                ctx.beginPath()
                ctx.moveTo(40, 0)
                ctx.lineTo(0, 30)
                ctx.lineTo(40, 0)
                ctx.lineTo(0, 30)
                ctx.closePath()
                ctx.fill()
                ctx.stroke()
            }
        }

        onClicked: {
            status.text = "line" // line 버튼 기능 수행
            canvas.visible = true
            area.visible = true
        }
    }

    Button {
        id: roundedsquare
        color: "white"
        border.color: Qt.darker(color)
        width: 80; height: 55
        Rectangle {
            id: roundedsquareRectangle
            width: 35; height: 25
            anchors.centerIn: roundedsquare
            color: "steelblue"
            border.color: "#4a50c3"
            radius: 5
        }

        onClicked: {
            status.text = "roundedsquare" //roundedsquare 버튼 기능 수행
            area.visible = false
        }
    }
}

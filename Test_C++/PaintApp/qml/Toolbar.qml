import QtQuick 2.10

Rectangle {
    anchors.top: menubar.bottom
    anchors.left: parent.left
    anchors.right: parent.right
    border.color: Qt.darker(color)

    height: 85

    Rectangle {
        id: tools

        anchors {
            left: parent.left
            top: parent.top
            topMargin: 20
            leftMargin: 10
        }

        function clearButtonColor() {
            if(canvas.toolMode !== canvas.squareMode) square.color = "white"
            if(canvas.toolMode !== canvas.circleMode) circle.color = "white"
            if(canvas.toolMode !== canvas.triangleMode) triangle.color = "white"
            if(canvas.toolMode !== canvas.lineMode) line.color = "white"
            if(canvas.toolMode !== canvas.roundedsquareMode) roundedsquare.color = "white"
            if(canvas.toolMode !== canvas.penMode) pen.color = "white"
        }

        Toolbutton {
            id: square
            border.color: Qt.darker(color)
            width: 80; height: 55
            anchors.left: parent.left
            anchors.leftMargin: 8
            Rectangle {
                id: squareRectangle
                width: 30; height: 30
                anchors.centerIn: square
                color:  "steelblue"
                border.color: "#4a50c3"
            }
            onPressed: square.color = "steelblue"
            onClicked: {
                status.text = "square" //square 버튼 기능 수행
                canvas.toolMode = canvas.squareMode
                parent.clearButtonColor()
            }
        }


        Toolbutton {
            id: circle
            border.color: Qt.darker(color)
            width: 80; height: 55
            anchors.left: square.right
            anchors.leftMargin: 8
            Rectangle {
                id: circleRectangle
                width: 30; height: 30
                anchors.centerIn: circle
                color: "steelblue"
                border.color: "#4a50c3"
                radius: 14
            }
            onPressed: circle.color = "steelblue"
            onClicked: {
                status.text = "circle" //circle 버튼 기능 수행
                canvas.toolMode = canvas.circleMode
                parent.clearButtonColor()
            }
        }

        Toolbutton {
            id: triangle
            border.color: Qt.darker(color)
            width: 80; height: 55
            anchors.left: circle.right
            anchors.leftMargin: 8
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
            onPressed: triangle.color = "steelblue"
            onClicked: {
                status.text = "triangle" //triangle 버튼 기능 수행
                canvas.toolMode = canvas.triangleMode
                parent.clearButtonColor()
            }
        }

        Toolbutton {
            id: line
            border.color: Qt.darker(color)
            width: 80; height: 55
            anchors.left: triangle.right
            anchors.leftMargin: 8
            Canvas {
                id: lineShape
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
            onPressed: line.color = "steelblue"
            onClicked: {
                status.text = "line" // line 버튼 기능 수행
                canvas.toolMode = canvas.lineMode
                parent.clearButtonColor()
            }
        }

        Toolbutton {
            id: roundedsquare
            border.color: Qt.darker(color)
            width: 80; height: 55
            anchors.left: line.right
            anchors.leftMargin: 8
            Rectangle {
                id: roundedsquareRectangle
                width: 35; height: 25
                anchors.centerIn: roundedsquare
                color: "steelblue"
                border.color: "#4a50c3"
                radius: 5
            }
            onPressed: roundedsquare.color = "steelblue"
            onClicked: {
                status.text = "roundedsquare" //roundedsquare 버튼 기능 수행
                canvas.toolMode = canvas.roundedsquareMode
                parent.clearButtonColor()
            }
        }

        Toolbutton {
            id: pen
            border.color: Qt.darker(color)
            width: 80; height: 55
            anchors.left: roundedsquare.right
            anchors.leftMargin: 8
            text: "pen"
            onPressed: pen.color = "steelblue"
            onClicked: {
                status.text = "pen" // line 버튼 기능 수행
                canvas.toolMode = canvas.penMode
                parent.clearButtonColor()
            }
        }
    }
}

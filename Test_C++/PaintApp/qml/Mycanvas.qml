import QtQuick 2.10
import MyPaint 1.0

Canvas {        //툴바 아래로 캔버스 기준 설정
    id: canvas

    anchors.top: toolbar.bottom
    anchors.left: parent.left
    anchors.right: parent.right
    anchors.bottom: parent.bottom
    anchors.margins: 5

    property int toolMode: 0        //툴바 모드를 위한 변수
    property int squareMode: 1
    property int circleMode: 2
    property int triangleMode: 3
    property int lineMode: 4
    property int roundedsquareMode: 5
    property int penMode: 6

    property real lastX
    property real lastY
    property int clickCount : 0

    function toolmodeChange(){
        aRectangle.toolMode = toolMode
    }

    PaintExam {
        id: aRectangle
        anchors.fill: parent
    }

    TextEdit {
        id: radius
        x: lastX + 20; y: lastY - 20
        visible: false
        focus: true
        text: "10"
        font.family: "Kristen ITC"
        font.bold: true
        font.pointSize: 10
    }

    MouseArea {
        id: area
        anchors.fill: parent

        onClicked: {
            lastX = mouseX
            lastY = mouseY

            if(toolMode) {
                clickCount++

                if(clickCount === 1){
                    aRectangle.startPoint(lastX, lastY)
                    aRectangle.movePoint(lastX, lastY)

                    if(toolMode !== triangleMode) clickCount++
                    if(toolMode === roundedsquareMode) radius.visible = true
                }

                else if(clickCount === 2) aRectangle.movePoint(lastX, lastY)

                else if(clickCount === 3) {
                    aRectangle.endPoint(lastX, lastY)
                    clickCount = 0
                    radius.visible = false
                }
            }
        }

        hoverEnabled: true
        onPositionChanged: {
            if(clickCount === 1 || clickCount === 2)    aRectangle.movingPoint(mouseX, mouseY)
            if(toolMode === roundedsquareMode)          aRectangle.radiusEdit(radius.text)
            else                                        radius.visible = false
        }
    }
}

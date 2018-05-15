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

    property int menuMode: 0        //메뉴 모드를 위한 변수
    property int saveMode: 1
    property int openMode: 2

    property real pressX
    property real pressY
    property real lastX
    property real lastY

    PaintExam {
        id: aRectangle
        anchors.fill: parent
    }

    function clearDraw(){
        aRectangle.cleardraw()
    }
    function changecolor_blue(){
        aRectangle.color = "blue"
    }
    function changecolor_red(){
        aRectangle.color = ""
    }
    function selectTool() {
        aRectangle.toolmode = toolMode;
    }

    onPaint: {
        //mouse.mousePress(pressX, pressY)
        //mouse.mouseRelease(lastX, lastY)
    }

    MouseArea {
        id: area
        anchors.fill: parent
        onPressed: {
            pressX = mouseX
            pressY = mouseY
            aRectangle.x = pressX
            aRectangle.y = pressY

        }
        onClicked: {
            requestPaint()
            lastX = mouseX
            lastY = mouseY
            aRectangle.width = lastX - pressX
            aRectangle.height = lastY - pressY
        }
        onPositionChanged: {
        }
    }
    onImageLoaded: requestPaint()
}






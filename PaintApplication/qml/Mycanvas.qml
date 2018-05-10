import QtQuick 2.10
import QtQuick.Window 2.10


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

    property string imagefilePath       //이미지 파일 open, save를 위한 경로
    property string imagefilePathSave

    property var undoImages: []          //undo모드를 위한 변수
    property int imageCount: 0
    property var undoUrl

    onImagefilePathChanged: {
        if(menuMode == saveMode){
            for(var i = 0 ; i < imagefilePath.length - 8 ; i++ ) {
                imagefilePathSave += imagefilePath[i+8]
            }
            save(imagefilePathSave)
            imagefilePathSave = ""
        }

        else if(menuMode == openMode) {
            if(imagefilePath.length != 0) {
                loadImage(imagefilePath)
            }
            requestPaint()
        }
    }

    onToolModeChanged: {
        if(toolMode === penMode) {
            imagelog()
            if(undoImages[imageCount] !== 0)
                imageCount++
        }
    }

    property real pressX
    property real pressY
    property real lastX
    property real lastY
    property var ctx
    property int press      // 이미지 로드할때 requestpaint에 의해 마지막 입력값이 같이 출력되는 것을 막기 위한 변수
    property var url

    function clearCanvas() {
        ctx = getContext('2d')
        ctx.beginPath()
        ctx.clearRect(0, 0, parent.width, parent.height)
    }

    function imagelog() {
        url = toDataURL('image/png')
        undoImages[imageCount] = url
    }

    function undoclick() {
        if(imageCount === undoImages.length && toolMode !== penMode)
            undoImages[imageCount] = toDataURL('image/png')
    }

    function undoBt() {
        clearCanvas()
        menuMode = openMode
        imagefilePath = undoImages[imageCount]
    }

    onPaint: {
        ctx = getContext("2d")
        ctx.lineWidth = 1
        ctx.strokeStyle = "blue"
        if(isImageLoaded(imagefilePath)){
            ctx.clearRect(0, 0, parent.width, parent.height)    // 이미지 로드 시 기존 이미지 클리어
            ctx.drawImage(imagefilePath, 0, 0)
            unloadImage(imagefilePath)
            menuMode = 0
        }
        if(imageCount === 0) {      //초기 이미지 배열 첫번째에 저장
            imagelog()
        }

        if(toolMode == squareMode)
        {       
            if(press === 1) {
                ctx.beginPath()
                ctx.rect(pressX, pressY, area.mouseX - pressX, area.mouseY - pressY)
                ctx.closePath()
                ctx.stroke()
                press = 0
            }
        }
        else if(toolMode == circleMode)
        {
            if(press === 1) {
                ctx.beginPath()
                ctx.ellipse(pressX, pressY, area.mouseX - pressX, area.mouseY - pressY)
                ctx.closePath()
                ctx.stroke()
                press = 0
            }
        }
        else if(toolMode == triangleMode)
        {
            if(press === 1) {
                ctx.beginPath()
                ctx.moveTo((pressX + lastX)/2, pressY)
                ctx.lineTo((pressX + lastX)/2, pressY)
                ctx.lineTo(area.mouseX, area.mouseY)
                ctx.lineTo(pressX, area.mouseY)
                ctx.closePath()
                ctx.stroke()
                press = 0
            }
        }
        else if(toolMode == lineMode)
        {
            if(press === 1) {
                ctx.beginPath()
                ctx.moveTo(pressX, pressY)
                ctx.lineTo(area.mouseX, area.mouseY)
                ctx.closePath()
                ctx.stroke()
                press = 0
            }
        }
        else if(toolMode == roundedsquareMode)
        {
            if(press === 1) {
                ctx.beginPath()
                ctx.roundedRect(pressX, pressY, area.mouseX - pressX, area.mouseY - pressY, 30, 30)
                ctx.closePath()
                ctx.stroke()
                press = 0
            }
        }
        else if(toolMode == penMode)
        {
                ctx.beginPath()
                ctx.moveTo(pressX, pressY)
                pressX = area.mouseX
                pressY = area.mouseY
                ctx.lineTo(area.mouseX, area.mouseY)
                ctx.closePath()
                ctx.stroke()
        }
    }

    MouseArea {
        id: area
        anchors.fill: parent
        onPressed: {
            press = 1
            pressX = mouseX
            pressY = mouseY
        }
        onClicked: {          
            requestPaint()
            lastX = mouseX
            lastY = mouseY
            imagelog()
            imageCount++
        }
        onPositionChanged: {
            if(toolMode == penMode)
                requestPaint()
        }
    }
    onImageLoaded: requestPaint()
}






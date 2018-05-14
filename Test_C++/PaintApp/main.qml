import QtQuick 2.10
import QtQuick.Window 2.10
import QtQuick.Dialogs 1.2
import QtQuick.Controls 2.2
import Qt.labs.folderlistmodel 2.0
import "qml"



Window {
    id: window
    visible: true
    width: 555
    height: 500

    Text {
        id: status  // 어떤 버튼 눌려있는지 상태 표시용 텍스트
        anchors.top: canvas.top // 영역 윗부분의 기준을 윈도우 윗부분으로 설정
    }

    Menubar{id: menubar}   //메뉴바 컴포넌트 호출 Toolbar 기준을 위해 id: menubar로 설정
    Toolbar{id: toolbar}   //툴바 컴포넌트 호출 Mycanvas 기준을 위해 id: toolbar로 설정
    Mycanvas{id: canvas}   //캠버스 컴포넌트 호출 status텍스트 기준을 위해 id: canvas로 설정
}

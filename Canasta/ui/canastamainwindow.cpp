#include "canastamainwindow.h"
#include "ui_canastamainwindow.h"

CanastaMainWindow::CanastaMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CanastaMainWindow)
{
    ui->setupUi(this);
    this->resize(mGeometry.getMainWindowWidth(), mGeometry.getMainWindowHeight());
}

CanastaMainWindow::~CanastaMainWindow()
{
    delete ui;
}

void CanastaMainWindow::resizeEvent(QResizeEvent *apEvent) {
    QMainWindow::resizeEvent(apEvent);
    mGeometry.updateSize(this->width(), this->height());
//    ui->centralFrame->move(QPoint(mGeometry.getMainFramePositionX(), mGeometry.getMainFramePositionY()));
//    ui->centralFrame->resize(mGeometry.getMainFrameWidth(), mGeometry.getMainFrameHeight());
    ui->mainFrame->move(QPoint(mGeometry.getMainFramePositionX(), mGeometry.getMainFramePositionY()));
    ui->mainFrame->resize(mGeometry.getMainFrameWidth(), mGeometry.getMainFrameHeight());
}

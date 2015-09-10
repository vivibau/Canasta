#include "canastamainwindow.h"
#include "ui_canastamainwindow.h"

CanastaMainWindow::CanastaMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CanastaMainWindow)
{
    ui->setupUi(this);
}

CanastaMainWindow::~CanastaMainWindow()
{
    delete ui;
}

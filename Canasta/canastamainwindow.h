#ifndef CANASTAMAINWINDOW_H
#define CANASTAMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class CanastaMainWindow;
}

class CanastaMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CanastaMainWindow(QWidget *parent = 0);
    ~CanastaMainWindow();

private:
    Ui::CanastaMainWindow *ui;
};

#endif // CANASTAMAINWINDOW_H

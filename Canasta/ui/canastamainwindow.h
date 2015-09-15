#ifndef CANASTAMAINWINDOW_H
#define CANASTAMAINWINDOW_H

#include <QMainWindow>
#include "utils/geometry.h"

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
    Geometry mGeometry;

    void resizeEvent(QResizeEvent *apEvent);
};

#endif // CANASTAMAINWINDOW_H

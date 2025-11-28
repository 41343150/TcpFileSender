#ifndef TOPFILESENDER_H
#define TOPFILESENDER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class TopFileSender;
}
QT_END_NAMESPACE

class TopFileSender : public QMainWindow
{
    Q_OBJECT

public:
    TopFileSender(QWidget *parent = nullptr);
    ~TopFileSender();

private:
    Ui::TopFileSender *ui;
};
#endif // TOPFILESENDER_H

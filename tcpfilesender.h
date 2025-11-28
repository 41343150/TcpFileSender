#ifndef TCPFILESENDER_H
#define TCPFILESENDER_H

#include <QDialog>
#include <QtNetwork>
#include <QtWidgets>

QT_BEGIN_NAMESPACE
namespace Ui {
class TcpFileSender;
}
QT_END_NAMESPACE

class TcpFileSender : public QDialog
{
    Q_OBJECT

public:
    TcpFileSender(QWidget *parent = nullptr);
    ~TcpFileSender();

private:
    Ui::TcpFileSender *ui;
public slots:
void start();
void acceptConnection();
void updateServerProgress();
void displayError(QAbstractSocket::SocketError socketError);

private:
QProgressBar *serverProgressBar;
QLabel *serverStatusLabel;
QPushButton *startButton;
QPushButton *quitButton;
QDialogButtonBox *buttonBox;

QTcpServer tcpServer;
QTcpSocket *tcpServerConnection;
qint64 totalBytes;
qint64 byteReceived;
qint64 fileNameSize;
QString fileName;
QFile *localFile;
QByteArray inBlock;
};
#endif // TCPFILESENDER_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QStack>
#include<QMap>
#include<QPushButton>
#include<QKeyEvent>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString operand;
    QString code;
    QString operands;
    QString codes;
    QMap<int, QPushButton *> keyBtns;
    QMap<int, QPushButton *> operatorBtns;

    QString calculation();

private:
    Ui::MainWindow *ui;

private slots:
    void btnNumClicked();
    void on_btnPeriod_clicked();
    void on_btnDel_clicked();
    void on_btnClearAll_clicked();
    void on_btnSign_clicked();
    void on_btnClear_clicked();
    void btnOperatorClicked();
    void on_btnEqual_clicked();
    void btnUniOperatorClicked();
    virtual void keyPressEvent(QKeyEvent *event);
};
#endif // MAINWINDOW_H

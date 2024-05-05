#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QRandomGenerator"
#include "dialog.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
        // 生成随机位置
        int x = QRandomGenerator::global()->bounded(0, this->width() - 50); // 随机生成x坐标
        int y = QRandomGenerator::global()->bounded(0, this->height() - 50); // 随机生成y坐标
        QWidget *senderWidget = qobject_cast<QWidget *>(sender()); // 获取发送信号的控件
        if (senderWidget) {
            senderWidget->move(x, y); // 移动按钮到随机位置
        }
        if(ui->pushButton->text() == "~王某出现~")
            ui->pushButton->setText("~11出现~");
        else
            ui->pushButton->setText("~王某出现~");
}


void MainWindow::on_pushButton_2_clicked()
{
    Dialog *child;
    child = new Dialog();
    child->show();

}


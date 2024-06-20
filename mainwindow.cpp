#include "mainwindow.h"
#include "./ui_mainwindow.h"

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

void MainWindow::on_button1_clicked()
{
    qDebug() << "按钮1被按下";
    repaint();
    val+=10;
}

void MainWindow::paintEvent(QPaintEvent *event) {

    QPainter painter(this);
    painter.setPen(QPen{Qt::blue});
    painter.setBrush(QBrush{Qt::blue});
    // 开始绘制
    painter.drawLine(10, 10, 100, 100); // 例如，画一条线
    painter.drawRect(val,10,100,100);
    // 其他绘制代码...
}

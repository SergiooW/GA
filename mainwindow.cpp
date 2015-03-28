#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWebKit>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->webView->back();
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->webView->forward();
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->webView->reload();
}

void MainWindow::on_pushButton_4_clicked()
{
    //ui->webView->load(""+ui->lineEdit->text());
    const QUrl ma_page("file:///home/s/Bureau/graphe/index.html");
    ui->webView->load(ma_page);
}

void MainWindow::on_lineEdit_returnPressed()
{
    on_pushButton_4_clicked();
}

void MainWindow::on_pushButton_5_clicked()
{
    //QWebView::page()->mainFrame()->evaluateJavaScript( "alert(\"test1\");" );
    ui->webView->page()->mainFrame()->evaluateJavaScript("alert(\"test1\");");
}


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    QString sample ="12345";
    qDebug()<<sample.at(2);   // 출력 : '3' 

    qDebug()<<sample.size(); // string 길이: 5

    sample.chop(2);   // 오른쪽 부터 숫자만큼 제거
    qDebug()<<sample; // 출력 : 123 

    sample ="12345";
    int sample_int=sample.toInt(); // 문자열을 숫자열로 변경

    sample=QString::number(sample_int); // 숫자열을 문자열로 변경

    qDebug()<<sample.indexOf('3');  // '3' 문자열의 인덱스 반환, 출력 : 2

    qDebug()<<sample.split('3');  // 3을 기준으로 나눠서 배열로 저장, 출력 '12','45'
    
}

MainWindow::~MainWindow()
{
    delete ui;
}


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFontDialog>
#include <QMessageBox>
#include <QColorDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setAutoFillBackground(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_3_clicked()
{
    bool font;
        QFont font_color = QFontDialog::getFont(&font,QFont("Times new roman,10"),this);
        if(font)
        {
            ui->label->setFont(font_color);
        }
        else
        {
            QMessageBox::information(this,"Message","User didn't choose any font");
        }
}

void MainWindow::on_pushButton_clicked()
{
    QPalette palette = ui->label->palette();
        QColor color = palette.color(QPalette::WindowText);
        QColor chosen_color = QColorDialog::getColor(color,this,"Choose text color");
        if(chosen_color.isValid())
        {
            palette.setColor(QPalette::WindowText, chosen_color);
            ui->label->setPalette(palette);
            qDebug()<<"User chosen a valid color";
        }
        else
        {
            qDebug()<<"User chosen an invalid color";
        }
}

void MainWindow::on_pushButton_2_clicked()
{
    QPalette palette = ui->label->palette();
        QColor color = palette.color(QPalette::Window);
        QColor chosen_color = QColorDialog::getColor(color,this,"Choose background color");
        if(chosen_color.isValid())
        {
            palette.setColor(QPalette::Window, chosen_color);
            ui->label->setPalette(palette);
            qDebug()<<"User chosen a valid color";
        }
        else
        {
            qDebug()<<"User chosen an invalid color";
        }

}

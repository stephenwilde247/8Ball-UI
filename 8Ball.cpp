#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainwindow.h"
#include <QDebug>
#include <iostream>
#include <stdlib.h>
#include <ctime>

int result = (rand() % 20) + 1;

void MainWindow::on_Button_clicked()
{
    int result = (rand() % 20) + 1;

    QString input = ui->Question->text();

    if (input.length() == 0) {
      qDebug("User did not enter an input");
      ui->Answer->setText("Try asking a question");
    }
    else{

    switch (result) {
    case 1:
        std::cout << "It is certain." << std::endl;
        ui->Answer->setText("It is certain.");
        break;
    case 2:
        std::cout << "It is decidedly so." << std::endl;
        ui->Answer->setText("It is decidedly so.");
        break;
    case 3:
        std::cout << "Without a doubt." << std::endl;
        ui->Answer->setText("Without a doubt.");
        break;
    case 4:
        std::cout << "Yes, definately." << std::endl;
        ui->Answer->setText("Yes, definately.");
        break;
    case 5:
        std::cout << "You can rely on it." << std::endl;
        ui->Answer->setText("You can rely on it.");
        break;
    case 6:
        std::cout << "As I see it, yes." << std::endl;
        ui->Answer->setText("As I see it, yes.");
        break;
    case 7:
        std::cout << "Most likely." << std::endl;
        ui->Answer->setText("Most likely.");
        break;
    case 8:
        std::cout << "Outlook good." << std::endl;
        ui->Answer->setText("Outlook good.");
        break;
    case 9:
        std::cout << "Yes." << std::endl;
        ui->Answer->setText("Yes.");
        break;
    case 10:
        std::cout << "All signs point to yes." << std::endl;
        ui->Answer->setText("All signs point to yes.");
        break;
    case 11:
        std::cout << "Reply hazy, try again." << std::endl;
        ui->Answer->setText("Reply hazy, try again.");
        break;
    case 12:
        std::cout << "Ask again later." << std::endl;
        ui->Answer->setText("Ask again later.");
        break;
    case 13:
        std::cout << "Better not tell you now." << std::endl;
        ui->Answer->setText("Better not tell you now.");
        break;
    case 14:
        std::cout << "Cannot predict now." << std::endl;
        ui->Answer->setText("Cannot predict now.");
        break;
    case 15:
        std::cout << "Concentrate and ask again." << std::endl;
        ui->Answer->setText("Concentrate and ask again.");
        break;
    case 16:
        std::cout << "Don't count on it." << std::endl;
        ui->Answer->setText("Don't count on it.");
        break;
    case 17:
        std::cout << "My reply is no." << std::endl;
        ui->Answer->setText("My reply is no.");
        break;
    case 18:
        std::cout << "My sources say no." << std::endl;
        ui->Answer->setText("My sources say no.");
        break;
    case 19:
        std::cout << "Outlook not so good." << std::endl;
        ui->Answer->setText("Outlook not so good.");
        break;
    case 20:
        std::cout << "Very doubtful." << std::endl;
        ui->Answer->setText("Very doubtful.");
        break;
    default:
        std::cout << "Somthing went wrong :(";
        ui->Answer->setText("Somthing went wrong :(");
        }
    }
}

#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <string>
#include <iostream>
#include <QPropertyAnimation>
#include <QDebug>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setButtonAnimation();
}

void MainWindow::setButtonAnimation()
{
    // Создадим группу анимации
    animationGroup1 = new QSequentialAnimationGroup(this);
    animationGroup2 = new QSequentialAnimationGroup(this);
    animationGroup3 = new QSequentialAnimationGroup(this);
    animationGroup4 = new QSequentialAnimationGroup(this);
    animationGroup5 = new QSequentialAnimationGroup(this);
    animationGroup6 = new QSequentialAnimationGroup(this);
    animationGroup7 = new QSequentialAnimationGroup(this);
    animationGroup8 = new QSequentialAnimationGroup(this);
    animationGroup9 = new QSequentialAnimationGroup(this);
    animationGroup0 = new QSequentialAnimationGroup(this);
    animationGroup00 = new QSequentialAnimationGroup(this);
    animationGroupPoint = new QSequentialAnimationGroup(this);
    animationGroupPlus = new QSequentialAnimationGroup(this);
    animationGroupEqual = new QSequentialAnimationGroup(this);
    animationGroupMinus = new QSequentialAnimationGroup(this);
    animationGroupDelX = new QSequentialAnimationGroup(this);
    animationGroupMultiply = new QSequentialAnimationGroup(this);
    animationGroupPercent = new QSequentialAnimationGroup(this);
    animationGroupDel = new QSequentialAnimationGroup(this);
    animationGroupPlusMinus = new QSequentialAnimationGroup(this);
    animationGroupC = new QSequentialAnimationGroup(this);
    animationGroupCE = new QSequentialAnimationGroup(this);
    animationGroupStrelka = new QSequentialAnimationGroup(this);

    animationGroupMS = new QSequentialAnimationGroup(this);
    animationGroupMR = new QSequentialAnimationGroup(this);
    animationGroupMPlus = new QSequentialAnimationGroup(this);
    animationGroupMMinus = new QSequentialAnimationGroup(this);
    animationGroupMC = new QSequentialAnimationGroup(this);

    // MS
    QPropertyAnimation* animMS = new QPropertyAnimation(ui->MS, "geometry");
    animMS->setDuration(60); // Длительность анимации
    animMS->setStartValue(ui->MS->geometry()); // Стартовая позиция и геометрия анимации
    animMS->setEndValue(ui->MS->geometry().translated(0, 2)); // Конечная позиция и геометрия анимации
    animationGroupMS->addAnimation(animMS); // Добавим анимацию в группу
    animMS = new QPropertyAnimation(ui->MS, "geometry");
    animMS->setDuration(60); // Длительность анимации
    animMS->setStartValue(ui->MS->geometry()); // Стартовая позиция и геометрия анимации
    animMS->setEndValue(ui->MS->geometry().translated(0, 0)); // Конечная позиция и геометрия анимации
    animationGroupMS->addAnimation(animMS); // Добавим анимацию в группу

    // MR
    QPropertyAnimation* animMR = new QPropertyAnimation(ui->MR, "geometry");
    animMR->setDuration(60); // Длительность анимации
    animMR->setStartValue(ui->MR->geometry()); // Стартовая позиция и геометрия анимации
    animMR->setEndValue(ui->MR->geometry().translated(0, 2)); // Конечная позиция и геометрия анимации
    animationGroupMR->addAnimation(animMR); // Добавим анимацию в группу
    animMR = new QPropertyAnimation(ui->MR, "geometry");
    animMR->setDuration(60); // Длительность анимации
    animMR->setStartValue(ui->MR->geometry()); // Стартовая позиция и геометрия анимации
    animMR->setEndValue(ui->MR->geometry().translated(0, 0)); // Конечная позиция и геометрия анимации
    animationGroupMR->addAnimation(animMR); // Добавим анимацию в группу

    // MPlus
    QPropertyAnimation* animMPlus = new QPropertyAnimation(ui->MPlus, "geometry");
    animMPlus->setDuration(60); // Длительность анимации
    animMPlus->setStartValue(ui->MPlus->geometry()); // Стартовая позиция и геометрия анимации
    animMPlus->setEndValue(ui->MPlus->geometry().translated(0, 2)); // Конечная позиция и геометрия анимации
    animationGroupMPlus->addAnimation(animMPlus); // Добавим анимацию в группу
    animMPlus = new QPropertyAnimation(ui->MPlus, "geometry");
    animMPlus->setDuration(60); // Длительность анимации
    animMPlus->setStartValue(ui->MPlus->geometry()); // Стартовая позиция и геометрия анимации
    animMPlus->setEndValue(ui->MPlus->geometry().translated(0, 0)); // Конечная позиция и геометрия анимации
    animationGroupMPlus->addAnimation(animMPlus); // Добавим анимацию в группу

    // MMinus
    QPropertyAnimation* animMMinus = new QPropertyAnimation(ui->MMinus, "geometry");
    animMMinus->setDuration(60); // Длительность анимации
    animMMinus->setStartValue(ui->MMinus->geometry()); // Стартовая позиция и геометрия анимации
    animMMinus->setEndValue(ui->MMinus->geometry().translated(0, 2)); // Конечная позиция и геометрия анимации
    animationGroupMMinus->addAnimation(animMMinus); // Добавим анимацию в группу
    animMMinus = new QPropertyAnimation(ui->MMinus, "geometry");
    animMMinus->setDuration(60); // Длительность анимации
    animMMinus->setStartValue(ui->MMinus->geometry()); // Стартовая позиция и геометрия анимации
    animMMinus->setEndValue(ui->MMinus->geometry().translated(0, 0)); // Конечная позиция и геометрия анимации
    animationGroupMMinus->addAnimation(animMMinus); // Добавим анимацию в группу

    // MC
    QPropertyAnimation* animMC = new QPropertyAnimation(ui->MC, "geometry");
    animMC->setDuration(60); // Длительность анимации
    animMC->setStartValue(ui->MC->geometry()); // Стартовая позиция и геометрия анимации
    animMC->setEndValue(ui->MC->geometry().translated(0, 2)); // Конечная позиция и геометрия анимации
    animationGroupMC->addAnimation(animMC); // Добавим анимацию в группу
    animMC = new QPropertyAnimation(ui->MC, "geometry");
    animMC->setDuration(60); // Длительность анимации
    animMC->setStartValue(ui->MC->geometry()); // Стартовая позиция и геометрия анимации
    animMC->setEndValue(ui->MC->geometry().translated(0, 0)); // Конечная позиция и геометрия анимации
    animationGroupMC->addAnimation(animMC); // Добавим анимацию в группу




    // Анимация нажатия кнопки
    // 1
    QPropertyAnimation* anim1 = new QPropertyAnimation(ui->One, "geometry");
    anim1->setDuration(60); // Длительность анимации
    anim1->setStartValue(ui->One->geometry()); // Стартовая позиция и геометрия анимации
    anim1->setEndValue(ui->One->geometry().translated(0, 2)); // Конечная позиция и геометрия анимации
    animationGroup1->addAnimation(anim1); // Добавим анимацию в группу
    anim1 = new QPropertyAnimation(ui->One, "geometry");
    anim1->setDuration(60); // Длительность анимации
    anim1->setStartValue(ui->One->geometry()); // Стартовая позиция и геометрия анимации
    anim1->setEndValue(ui->One->geometry().translated(0, 0)); // Конечная позиция и геометрия анимации
    animationGroup1->addAnimation(anim1); // Добавим анимацию в группу

    // 2
    QPropertyAnimation* anim2 = new QPropertyAnimation(ui->Two, "geometry");
    anim2->setDuration(60); // Длительность анимации
    anim2->setStartValue(ui->Two->geometry()); // Стартовая позиция и геометрия анимации
    anim2->setEndValue(ui->Two->geometry().translated(0, 2)); // Конечная позиция и геометрия анимации
    animationGroup2->addAnimation(anim2); // Добавим анимацию в группу
    anim2 = new QPropertyAnimation(ui->Two, "geometry");
    anim2->setDuration(60); // Длительность анимации
    anim2->setStartValue(ui->Two->geometry()); // Стартовая позиция и геометрия анимации
    anim2->setEndValue(ui->Two->geometry().translated(0, 0)); // Конечная позиция и геометрия анимации
    animationGroup2->addAnimation(anim2); // Добавим анимацию в группу

    // 3
    QPropertyAnimation* anim3 = new QPropertyAnimation(ui->Three, "geometry");
    anim3->setDuration(60); // Длительность анимации
    anim3->setStartValue(ui->Three->geometry()); // Стартовая позиция и геометрия анимации
    anim3->setEndValue(ui->Three->geometry().translated(0, 2)); // Конечная позиция и геометрия анимации
    animationGroup3->addAnimation(anim3); // Добавим анимацию в группу
    anim3 = new QPropertyAnimation(ui->Three, "geometry");
    anim3->setDuration(60); // Длительность анимации
    anim3->setStartValue(ui->Three->geometry()); // Стартовая позиция и геометрия анимации
    anim3->setEndValue(ui->Three->geometry().translated(0, 0)); // Конечная позиция и геометрия анимации
    animationGroup3->addAnimation(anim3); // Добавим анимацию в группу


    // 4
    QPropertyAnimation* anim4 = new QPropertyAnimation(ui->Four, "geometry");
    anim4->setDuration(60); // Длительность анимации
    anim4->setStartValue(ui->Four->geometry()); // Стартовая позиция и геометрия анимации
    anim4->setEndValue(ui->Four->geometry().translated(0, 2)); // Конечная позиция и геометрия анимации
    animationGroup4->addAnimation(anim4); // Добавим анимацию в группу
    anim4 = new QPropertyAnimation(ui->Four, "geometry");
    anim4->setDuration(60); // Длительность анимации
    anim4->setStartValue(ui->Four->geometry()); // Стартовая позиция и геометрия анимации
    anim4->setEndValue(ui->Four->geometry().translated(0, 0)); // Конечная позиция и геометрия анимации
    animationGroup4->addAnimation(anim4); // Добавим анимацию в группу

    // 5
    QPropertyAnimation* anim5 = new QPropertyAnimation(ui->Five, "geometry");
    anim5->setDuration(60); // Длительность анимации
    anim5->setStartValue(ui->Five->geometry()); // Стартовая позиция и геометрия анимации
    anim5->setEndValue(ui->Five->geometry().translated(0, 2)); // Конечная позиция и геометрия анимации
    animationGroup5->addAnimation(anim5); // Добавим анимацию в группу
    anim5 = new QPropertyAnimation(ui->Five, "geometry");
    anim5->setDuration(60); // Длительность анимации
    anim5->setStartValue(ui->Five->geometry()); // Стартовая позиция и геометрия анимации
    anim5->setEndValue(ui->Five->geometry().translated(0, 0)); // Конечная позиция и геометрия анимации
    animationGroup5->addAnimation(anim5); // Добавим анимацию в группу

    // 6
    QPropertyAnimation* anim6 = new QPropertyAnimation(ui->Six, "geometry");
    anim6->setDuration(60); // Длительность анимации
    anim6->setStartValue(ui->Six->geometry()); // Стартовая позиция и геометрия анимации
    anim6->setEndValue(ui->Six->geometry().translated(0, 2)); // Конечная позиция и геометрия анимации
    animationGroup6->addAnimation(anim6); // Добавим анимацию в группу
    anim6 = new QPropertyAnimation(ui->Six, "geometry");
    anim6->setDuration(60); // Длительность анимации
    anim6->setStartValue(ui->Six->geometry()); // Стартовая позиция и геометрия анимации
    anim6->setEndValue(ui->Six->geometry().translated(0, 0)); // Конечная позиция и геометрия анимации
    animationGroup6->addAnimation(anim6); // Добавим анимацию в группу


    // 7
    QPropertyAnimation* anim7 = new QPropertyAnimation(ui->Seven, "geometry");
    anim7->setDuration(60); // Длительность анимации
    anim7->setStartValue(ui->Seven->geometry()); // Стартовая позиция и геометрия анимации
    anim7->setEndValue(ui->Seven->geometry().translated(0, 2)); // Конечная позиция и геометрия анимации
    animationGroup7->addAnimation(anim7); // Добавим анимацию в группу
    anim7 = new QPropertyAnimation(ui->Seven, "geometry");
    anim7->setDuration(60); // Длительность анимации
    anim7->setStartValue(ui->Seven->geometry()); // Стартовая позиция и геометрия анимации
    anim7->setEndValue(ui->Seven->geometry().translated(0, 0)); // Конечная позиция и геометрия анимации
    animationGroup7->addAnimation(anim7); // Добавим анимацию в группу


    // 8
    QPropertyAnimation* anim8 = new QPropertyAnimation(ui->Eight, "geometry");
    anim8->setDuration(60); // Длительность анимации
    anim8->setStartValue(ui->Eight->geometry()); // Стартовая позиция и геометрия анимации
    anim8->setEndValue(ui->Eight->geometry().translated(0, 2)); // Конечная позиция и геометрия анимации
    animationGroup8->addAnimation(anim8); // Добавим анимацию в группу
    anim8 = new QPropertyAnimation(ui->Eight, "geometry");
    anim8->setDuration(60); // Длительность анимации
    anim8->setStartValue(ui->Eight->geometry()); // Стартовая позиция и геометрия анимации
    anim8->setEndValue(ui->Eight->geometry().translated(0, 0)); // Конечная позиция и геометрия анимации
    animationGroup8->addAnimation(anim8); // Добавим анимацию в группу


    // 9
    QPropertyAnimation* anim9 = new QPropertyAnimation(ui->Nine, "geometry");
    anim9->setDuration(60); // Длительность анимации
    anim9->setStartValue(ui->Nine->geometry()); // Стартовая позиция и геометрия анимации
    anim9->setEndValue(ui->Nine->geometry().translated(0, 2)); // Конечная позиция и геометрия анимации
    animationGroup9->addAnimation(anim9); // Добавим анимацию в группу
    anim9 = new QPropertyAnimation(ui->Nine, "geometry");
    anim9->setDuration(60); // Длительность анимации
    anim9->setStartValue(ui->Nine->geometry()); // Стартовая позиция и геометрия анимации
    anim9->setEndValue(ui->Nine->geometry().translated(0, 0)); // Конечная позиция и геометрия анимации
    animationGroup9->addAnimation(anim9); // Добавим анимацию в группу


    // 0
    QPropertyAnimation* anim0 = new QPropertyAnimation(ui->Zero, "geometry");
    anim0->setDuration(60); // Длительность анимации
    anim0->setStartValue(ui->Zero->geometry()); // Стартовая позиция и геометрия анимации
    anim0->setEndValue(ui->Zero->geometry().translated(0, 2)); // Конечная позиция и геометрия анимации
    animationGroup0->addAnimation(anim0); // Добавим анимацию в группу
    anim0 = new QPropertyAnimation(ui->Zero, "geometry");
    anim0->setDuration(60); // Длительность анимации
    anim0->setStartValue(ui->Zero->geometry()); // Стартовая позиция и геометрия анимации
    anim0->setEndValue(ui->Zero->geometry().translated(0, 0)); // Конечная позиция и геометрия анимации
    animationGroup0->addAnimation(anim0); // Добавим анимацию в группу


    // 00
    QPropertyAnimation* anim00 = new QPropertyAnimation(ui->Zero2, "geometry");
    anim00->setDuration(60); // Длительность анимации
    anim00->setStartValue(ui->Zero2->geometry()); // Стартовая позиция и геометрия анимации
    anim00->setEndValue(ui->Zero2->geometry().translated(0, 2)); // Конечная позиция и геометрия анимации
    animationGroup00->addAnimation(anim00); // Добавим анимацию в группу
    anim00 = new QPropertyAnimation(ui->Zero2, "geometry");
    anim00->setDuration(60); // Длительность анимации
    anim00->setStartValue(ui->Zero2->geometry()); // Стартовая позиция и геометрия анимации
    anim00->setEndValue(ui->Zero2->geometry().translated(0, 0)); // Конечная позиция и геометрия анимации
    animationGroup00->addAnimation(anim00); // Добавим анимацию в группу


    // Point
    QPropertyAnimation* animPoint = new QPropertyAnimation(ui->Point, "geometry");
    animPoint->setDuration(60); // Длительность анимации
    animPoint->setStartValue(ui->Point->geometry()); // Стартовая позиция и геометрия анимации
    animPoint->setEndValue(ui->Point->geometry().translated(0, 2)); // Конечная позиция и геометрия анимации
    animationGroupPoint->addAnimation(animPoint); // Добавим анимацию в группу
    animPoint = new QPropertyAnimation(ui->Point, "geometry");
    animPoint->setDuration(60); // Длительность анимации
    animPoint->setStartValue(ui->Point->geometry()); // Стартовая позиция и геометрия анимации
    animPoint->setEndValue(ui->Point->geometry().translated(0, 0)); // Конечная позиция и геометрия анимации
    animationGroupPoint->addAnimation(animPoint); // Добавим анимацию в группу

    // Plus
    QPropertyAnimation* animPlus = new QPropertyAnimation(ui->Plus, "geometry");
    animPlus->setDuration(60); // Длительность анимации
    animPlus->setStartValue(ui->Plus->geometry()); // Стартовая позиция и геометрия анимации
    animPlus->setEndValue(ui->Plus->geometry().translated(0, 2)); // Конечная позиция и геометрия анимации
    animationGroupPlus->addAnimation(animPlus); // Добавим анимацию в группу
    animPlus = new QPropertyAnimation(ui->Plus, "geometry");
    animPlus->setDuration(60); // Длительность анимации
    animPlus->setStartValue(ui->Plus->geometry()); // Стартовая позиция и геометрия анимации
    animPlus->setEndValue(ui->Plus->geometry().translated(0, 0)); // Конечная позиция и геометрия анимации
    animationGroupPlus->addAnimation(animPlus); // Добавим анимацию в группу


    // Minus
    QPropertyAnimation* animMinus = new QPropertyAnimation(ui->Minus, "geometry");
    animMinus->setDuration(60); // Длительность анимации
    animMinus->setStartValue(ui->Minus->geometry()); // Стартовая позиция и геометрия анимации
    animMinus->setEndValue(ui->Minus->geometry().translated(0, 2)); // Конечная позиция и геометрия анимации
    animationGroupMinus->addAnimation(animMinus); // Добавим анимацию в группу
    animMinus = new QPropertyAnimation(ui->Minus, "geometry");
    animMinus->setDuration(60); // Длительность анимации
    animMinus->setStartValue(ui->Minus->geometry()); // Стартовая позиция и геометрия анимации
    animMinus->setEndValue(ui->Minus->geometry().translated(0, 0)); // Конечная позиция и геометрия анимации
    animationGroupMinus->addAnimation(animMinus); // Добавим анимацию в группу

    // Multiply
    QPropertyAnimation* animMultiply = new QPropertyAnimation(ui->Multiply, "geometry");
    animMultiply->setDuration(60); // Длительность анимации
    animMultiply->setStartValue(ui->Multiply->geometry()); // Стартовая позиция и геометрия анимации
    animMultiply->setEndValue(ui->Multiply->geometry().translated(0, 2)); // Конечная позиция и геометрия анимации
    animationGroupMultiply->addAnimation(animMultiply); // Добавим анимацию в группу
    animMultiply = new QPropertyAnimation(ui->Multiply, "geometry");
    animMultiply->setDuration(60); // Длительность анимации
    animMultiply->setStartValue(ui->Multiply->geometry()); // Стартовая позиция и геометрия анимации
    animMultiply->setEndValue(ui->Multiply->geometry().translated(0, 0)); // Конечная позиция и геометрия анимации
    animationGroupMultiply->addAnimation(animMultiply); // Добавим анимацию в группу

    // Del
    QPropertyAnimation* animDel = new QPropertyAnimation(ui->Del, "geometry");
    animDel->setDuration(60); // Длительность анимации
    animDel->setStartValue(ui->Del->geometry()); // Стартовая позиция и геометрия анимации
    animDel->setEndValue(ui->Del->geometry().translated(0, 2)); // Конечная позиция и геометрия анимации
    animationGroupDel->addAnimation(animDel); // Добавим анимацию в группу
    animDel = new QPropertyAnimation(ui->Del, "geometry");
    animDel->setDuration(60); // Длительность анимации
    animDel->setStartValue(ui->Del->geometry()); // Стартовая позиция и геометрия анимации
    animDel->setEndValue(ui->Del->geometry().translated(0, 0)); // Конечная позиция и геометрия анимации
    animationGroupDel->addAnimation(animDel); // Добавим анимацию в группу

    // DelX
    QPropertyAnimation* animDelX = new QPropertyAnimation(ui->DelX, "geometry");
    animDelX->setDuration(60); // Длительность анимации
    animDelX->setStartValue(ui->DelX->geometry()); // Стартовая позиция и геометрия анимации
    animDelX->setEndValue(ui->DelX->geometry().translated(0, 2)); // Конечная позиция и геометрия анимации
    animationGroupDelX->addAnimation(animDelX); // Добавим анимацию в группу
    animDelX = new QPropertyAnimation(ui->DelX, "geometry");
    animDelX->setDuration(60); // Длительность анимации
    animDelX->setStartValue(ui->DelX->geometry()); // Стартовая позиция и геометрия анимации
    animDelX->setEndValue(ui->DelX->geometry().translated(0, 0)); // Конечная позиция и геометрия анимации
    animationGroupDelX->addAnimation(animDelX); // Добавим анимацию в группу

    // Percent
    QPropertyAnimation* animPercent = new QPropertyAnimation(ui->Percent, "geometry");
    animPercent->setDuration(60); // Длительность анимации
    animPercent->setStartValue(ui->Percent->geometry()); // Стартовая позиция и геометрия анимации
    animPercent->setEndValue(ui->Percent->geometry().translated(0, 2)); // Конечная позиция и геометрия анимации
    animationGroupPercent->addAnimation(animPercent); // Добавим анимацию в группу
    animPercent = new QPropertyAnimation(ui->Percent, "geometry");
    animPercent->setDuration(60); // Длительность анимации
    animPercent->setStartValue(ui->Percent->geometry()); // Стартовая позиция и геометрия анимации
    animPercent->setEndValue(ui->Percent->geometry().translated(0, 0)); // Конечная позиция и геометрия анимации
    animationGroupPercent->addAnimation(animPercent); // Добавим анимацию в группу


    // PlusMinus
    QPropertyAnimation* animPlusMinus = new QPropertyAnimation(ui->PlusMinus, "geometry");
    animPlusMinus->setDuration(60); // Длительность анимации
    animPlusMinus->setStartValue(ui->PlusMinus->geometry()); // Стартовая позиция и геометрия анимации
    animPlusMinus->setEndValue(ui->PlusMinus->geometry().translated(0, 2)); // Конечная позиция и геометрия анимации
    animationGroupPlusMinus->addAnimation(animPlusMinus); // Добавим анимацию в группу
    animPlusMinus = new QPropertyAnimation(ui->PlusMinus, "geometry");
    animPlusMinus->setDuration(60); // Длительность анимации
    animPlusMinus->setStartValue(ui->PlusMinus->geometry()); // Стартовая позиция и геометрия анимации
    animPlusMinus->setEndValue(ui->PlusMinus->geometry().translated(0, 0)); // Конечная позиция и геометрия анимации
    animationGroupPlusMinus->addAnimation(animPlusMinus); // Добавим анимацию в группу


    // C
    QPropertyAnimation* animC = new QPropertyAnimation(ui->C, "geometry");
    animC->setDuration(60); // Длительность анимации
    animC->setStartValue(ui->C->geometry()); // Стартовая позиция и геометрия анимации
    animC->setEndValue(ui->C->geometry().translated(0, 2)); // Конечная позиция и геометрия анимации
    animationGroupC->addAnimation(animC); // Добавим анимацию в группу
    animC = new QPropertyAnimation(ui->C, "geometry");
    animC->setDuration(60); // Длительность анимации
    animC->setStartValue(ui->C->geometry()); // Стартовая позиция и геометрия анимации
    animC->setEndValue(ui->C->geometry().translated(0, 0)); // Конечная позиция и геометрия анимации
    animationGroupC->addAnimation(animC); // Добавим анимацию в группу


    // CE
    QPropertyAnimation* animCE = new QPropertyAnimation(ui->CE, "geometry");
    animCE->setDuration(60); // Длительность анимации
    animCE->setStartValue(ui->CE->geometry()); // Стартовая позиция и геометрия анимации
    animCE->setEndValue(ui->CE->geometry().translated(0, 2)); // Конечная позиция и геометрия анимации
    animationGroupCE->addAnimation(animCE); // Добавим анимацию в группу
    animCE = new QPropertyAnimation(ui->CE, "geometry");
    animCE->setDuration(60); // Длительность анимации
    animCE->setStartValue(ui->CE->geometry()); // Стартовая позиция и геометрия анимации
    animCE->setEndValue(ui->CE->geometry().translated(0, 0)); // Конечная позиция и геометрия анимации
    animationGroupCE->addAnimation(animCE); // Добавим анимацию в группу


    // Strelka
    QPropertyAnimation* animStrelka = new QPropertyAnimation(ui->Strelka, "geometry");
    animStrelka->setDuration(60); // Длительность анимации
    animStrelka->setStartValue(ui->Strelka->geometry()); // Стартовая позиция и геометрия анимации
    animStrelka->setEndValue(ui->Strelka->geometry().translated(0, 2)); // Конечная позиция и геометрия анимации
    animationGroupStrelka->addAnimation(animStrelka); // Добавим анимацию в группу
    animStrelka = new QPropertyAnimation(ui->Strelka, "geometry");
    animStrelka->setDuration(60); // Длительность анимации
    animStrelka->setStartValue(ui->Strelka->geometry()); // Стартовая позиция и геометрия анимации
    animStrelka->setEndValue(ui->Strelka->geometry().translated(0, 0)); // Конечная позиция и геометрия анимации
    animationGroupStrelka->addAnimation(animStrelka); // Добавим анимацию в группу


    // Equal
    QPropertyAnimation* animEqual = new QPropertyAnimation(ui->Equal, "geometry");
    animEqual->setDuration(60); // Длительность анимации
    animEqual->setStartValue(ui->Equal->geometry()); // Стартовая позиция и геометрия анимации
    animEqual->setEndValue(ui->Equal->geometry().translated(0, 2)); // Конечная позиция и геометрия анимации
    animationGroupEqual->addAnimation(animEqual); // Добавим анимацию в группу
    animEqual = new QPropertyAnimation(ui->Equal, "geometry");
    animEqual->setDuration(60); // Длительность анимации
    animEqual->setStartValue(ui->Equal->geometry()); // Стартовая позиция и геометрия анимации
    animEqual->setEndValue(ui->Equal->geometry().translated(0, 0)); // Конечная позиция и геометрия анимации
    animationGroupEqual->addAnimation(animEqual); // Добавим анимацию в группу
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_One_clicked()
{
    animationGroup1->start();

    string currentText = ui->ValueCalculated->currentText().toStdString();

    if (currentText != "")
    {
        currentText += "1";

        ui->ValueCalculated->removeItem(ui->ValueCalculated->currentIndex());
        ui->ValueCalculated->addItem(QString::fromStdString(currentText));
        ui->ValueCalculated->setCurrentText(QString::fromStdString(currentText));
    }

    else
    {
        ui->ValueCalculated->addItem("1");
        ui->ValueCalculated->setCurrentText("1");
    }

}


void MainWindow::on_Two_clicked()
{
    animationGroup2->start();

    string currentText = ui->ValueCalculated->currentText().toStdString();

    if (currentText != "")
    {
        currentText += "2";

        ui->ValueCalculated->removeItem(ui->ValueCalculated->currentIndex());
        ui->ValueCalculated->addItem(QString::fromStdString(currentText));
        ui->ValueCalculated->setCurrentText(QString::fromStdString(currentText));
    }

    else
    {
        ui->ValueCalculated->addItem("2");
        ui->ValueCalculated->setCurrentText("2");
    }

}


void MainWindow::on_Three_clicked()
{
    animationGroup3->start();

    string currentText = ui->ValueCalculated->currentText().toStdString();

    if (currentText != "")
    {
        currentText += "3";

        ui->ValueCalculated->removeItem(ui->ValueCalculated->currentIndex());
        ui->ValueCalculated->addItem(QString::fromStdString(currentText));
        ui->ValueCalculated->setCurrentText(QString::fromStdString(currentText));
    }

    else
    {
        ui->ValueCalculated->addItem("3");
        ui->ValueCalculated->setCurrentText("3");
    }
}


void MainWindow::on_Four_clicked()
{
    animationGroup4->start();

    string currentText = ui->ValueCalculated->currentText().toStdString();

    if (currentText != "")
    {
        currentText += "4";

        ui->ValueCalculated->removeItem(ui->ValueCalculated->currentIndex());
        ui->ValueCalculated->addItem(QString::fromStdString(currentText));
        ui->ValueCalculated->setCurrentText(QString::fromStdString(currentText));
    }

    else
    {
        ui->ValueCalculated->addItem("4");
        ui->ValueCalculated->setCurrentText("4");
    }
}


void MainWindow::on_Five_clicked()
{
    animationGroup5->start();

    string currentText = ui->ValueCalculated->currentText().toStdString();

    if (currentText != "")
    {
        currentText += "5";

        ui->ValueCalculated->removeItem(ui->ValueCalculated->currentIndex());
        ui->ValueCalculated->addItem(QString::fromStdString(currentText));
        ui->ValueCalculated->setCurrentText(QString::fromStdString(currentText));
    }

    else
    {
        ui->ValueCalculated->addItem("5");
        ui->ValueCalculated->setCurrentText("5");
    }
}


void MainWindow::on_Six_clicked()
{
    animationGroup6->start();

    string currentText = ui->ValueCalculated->currentText().toStdString();

    if (currentText != "")
    {
        currentText += "6";

        ui->ValueCalculated->removeItem(ui->ValueCalculated->currentIndex());
        ui->ValueCalculated->addItem(QString::fromStdString(currentText));
        ui->ValueCalculated->setCurrentText(QString::fromStdString(currentText));
    }

    else
    {
        ui->ValueCalculated->addItem("6");
        ui->ValueCalculated->setCurrentText("6");
    }
}


void MainWindow::on_Seven_clicked()
{
    animationGroup7->start();

    string currentText = ui->ValueCalculated->currentText().toStdString();

    if (currentText != "")
    {
        currentText += "7";

        ui->ValueCalculated->removeItem(ui->ValueCalculated->currentIndex());
        ui->ValueCalculated->addItem(QString::fromStdString(currentText));
        ui->ValueCalculated->setCurrentText(QString::fromStdString(currentText));

    }

    else
    {
        ui->ValueCalculated->addItem("7");
        ui->ValueCalculated->setCurrentText("7");

    }
}


void MainWindow::on_Eight_clicked()
{
    animationGroup8->start();

    string currentText = ui->ValueCalculated->currentText().toStdString();

    if (currentText != "")
    {
        currentText += "8";

        ui->ValueCalculated->removeItem(ui->ValueCalculated->currentIndex());
        ui->ValueCalculated->addItem(QString::fromStdString(currentText));
        ui->ValueCalculated->setCurrentText(QString::fromStdString(currentText));

    }

    else
    {
        ui->ValueCalculated->addItem("8");
        ui->ValueCalculated->setCurrentText("8");

    }
}


void MainWindow::on_Nine_clicked()
{
    animationGroup9->start();

    string currentText = ui->ValueCalculated->currentText().toStdString();

    if (currentText != "")
    {
        currentText += "9";

        ui->ValueCalculated->removeItem(ui->ValueCalculated->currentIndex());
        ui->ValueCalculated->addItem(QString::fromStdString(currentText));
        ui->ValueCalculated->setCurrentText(QString::fromStdString(currentText));


    }

    else
    {
        ui->ValueCalculated->addItem("9");
        ui->ValueCalculated->setCurrentText("9");


    }
}

void MainWindow::ClickProcessing(char operation)
{
    string currentText = ui->ValueCalculated->currentText().toStdString();
    if (currentText != "")
    {
        double currentValue = stod(currentText);

        if (lastOperation == '+')
        {
            ValueSaved = ValueSaved + currentValue;
            arifmOperations('+');
        }

        else if (lastOperation == '-')
        {
            ValueSaved = ValueSaved - currentValue;
            arifmOperations('-');
        }

        else if (lastOperation == '*')
        {
            ValueSaved = ValueSaved * currentValue;
            arifmOperations('*');
        }

        else if (lastOperation == '/')
        {
            ValueSaved = ValueSaved / currentValue;
            arifmOperations('/');
        }

        else
        {
            ValueSaved = currentValue;
            lastOperation = operation;
        }
        CountOfOperations = CountOfOperations + 1;

        ui->ValueCalculated->removeItem(ui->ValueCalculated->currentIndex());
        ui->ValueCalculated->setCurrentText(QString::fromStdString(""));

        penultimateOperationPrev = operation;
    }

}


void MainWindow::arifmOperations(char operation)
{
    valueForSavedOperation = ui->ValueCalculated->currentText().toDouble();
    lastOperation = operation;
    penultimateOperation = operation;
}



void MainWindow::on_Plus_clicked()
{
    animationGroupPlus->start();

    ClickProcessing('+');
    repeatOperation = false;
    lastOperation = '+';
    penultimateOperation = '+';
    penultimateOperationPrev = '+';
}


void MainWindow::on_Minus_clicked()
{
    animationGroupPlus->start();

    ClickProcessing('-');
    repeatOperation = false;
    lastOperation = '-';
    penultimateOperation = '-';
    penultimateOperationPrev = '-';
}


void MainWindow::on_Multiply_clicked()
{
    animationGroupMultiply->start();

    ClickProcessing('*');
    repeatOperation = false;
    lastOperation = '*';
    penultimateOperation = '*';
    penultimateOperationPrev = '*';
}


void MainWindow::on_Del_clicked()
{
    animationGroupDel->start();

    ClickProcessing('/');
    repeatOperation = false;
    lastOperation = '/';
    penultimateOperation = '/';
    penultimateOperationPrev = '/';
}


void MainWindow::on_Percent_clicked()
{
    animationGroupPercent->start();

    double currentValue = ui->ValueCalculated->currentText().toDouble();

    valueForSavedOperation = currentValue / 100 * ValueSaved;

    ui->ValueCalculated->removeItem(ui->ValueCalculated->currentIndex());
    ui->ValueCalculated->addItem(QString::number(valueForSavedOperation));
    ui->ValueCalculated->setCurrentText(QString::number(valueForSavedOperation));

    lastOperation = '%';
}



void MainWindow::on_Equal_clicked()
{
    animationGroupEqual->start();

    if (lastOperation == '=')
    {
        if (penultimateOperation == '+') {

            double tempValueCalculated = ValueSaved + valueForSavedOperation;

            ValueSaved = tempValueCalculated;
        }

        else if (penultimateOperation == '-') {

            double tempValueCalculated = ValueSaved - valueForSavedOperation;

            ValueSaved = tempValueCalculated;
        }

        else if (penultimateOperation == '*') {

            double tempValueCalculated = ValueSaved * valueForSavedOperation;

            ValueSaved = tempValueCalculated;
        }

        else if (penultimateOperation == '/') {

            double tempValueCalculated = ValueSaved / valueForSavedOperation;

            ValueSaved = tempValueCalculated;
        }

        else if (penultimateOperation == '%') {

            if (penultimateOperationPrev == '+')
            {
                ValueSaved = ValueSaved + valueForSavedOperation;
            }

            else if (penultimateOperationPrev == '-')
            {
                ValueSaved = ValueSaved - valueForSavedOperation;
            }

            else if (penultimateOperationPrev == '*')
            {
                ValueSaved = ValueSaved * valueForSavedOperation;
            }

            else if (penultimateOperationPrev == '/')
            {
                ValueSaved = ValueSaved / valueForSavedOperation;
            }
        }
    }

    else if (lastOperation == '+') {

        double tempValueCalculated = ValueSaved + ui->ValueCalculated->currentText().toDouble();

        ValueSaved = tempValueCalculated;
        valueForSavedOperation = ui->ValueCalculated->currentText().toDouble();
        lastOperation = '=';
        penultimateOperation = '+';
    }

    else if (lastOperation == '-')
    {
        double tempValueCalculated = ValueSaved - ui->ValueCalculated->currentText().toDouble();

        ValueSaved = tempValueCalculated;
        valueForSavedOperation = ui->ValueCalculated->currentText().toDouble();
        lastOperation = '=';
        penultimateOperation = '-';
    }

    else if (lastOperation == '*')
    {
        double tempValueCalculated = ValueSaved * ui->ValueCalculated->currentText().toDouble();

        ValueSaved = tempValueCalculated;
        valueForSavedOperation = ui->ValueCalculated->currentText().toDouble();
        lastOperation = '=';
        penultimateOperation = '*';
    }

    else if (lastOperation == '/')
    {
        double tempValueCalculated = ValueSaved / ui->ValueCalculated->currentText().toDouble();

        ValueSaved = tempValueCalculated;
        valueForSavedOperation = ui->ValueCalculated->currentText().toDouble();
        lastOperation = '=';
        penultimateOperation = '/';
    }

    else if (lastOperation == '%')
    {
        if (penultimateOperation == '+')
        {
            ValueSaved = ValueSaved + ui->ValueCalculated->currentText().toDouble();
            penultimateOperationPrev = '+';
        }

        else if (penultimateOperation == '-')
        {
            ValueSaved = ValueSaved - ui->ValueCalculated->currentText().toDouble();
            penultimateOperationPrev = '-';
        }

        else if (penultimateOperation == '*')
        {
            ValueSaved = ValueSaved * ui->ValueCalculated->currentText().toDouble();
            penultimateOperationPrev = '*';
        }

        else if (penultimateOperation == '/')
        {
            ValueSaved = ValueSaved / ui->ValueCalculated->currentText().toDouble();
            penultimateOperationPrev = '/';
        }

        valueForSavedOperation =  ui->ValueCalculated->currentText().toDouble();
        lastOperation = '=';
        penultimateOperation = '%';
    }


    ui->ValueCalculated->removeItem(ui->ValueCalculated->currentIndex());
    ui->ValueCalculated->addItem(QString::number(ValueSaved));
    ui->ValueCalculated->setCurrentText(QString::number(ValueSaved));

    repeatOperation = true;
    newValue = true;
    CountOfOperations = 0;
}



void MainWindow::on_DelX_clicked()
{
    animationGroupDelX->start();

    double currentValue = ui->ValueCalculated->currentText().toDouble();

    double value = 1.0 / currentValue;

    ui->ValueCalculated->removeItem(ui->ValueCalculated->currentIndex());
    ui->ValueCalculated->addItem(QString::number(value));
    ui->ValueCalculated->setCurrentText(QString::number(value));  
}


void MainWindow::on_PlusMinus_clicked()
{
    animationGroupPlusMinus->start();

    double currentValue = ui->ValueCalculated->currentText().toDouble();

    double value = currentValue * -1.0;

    ui->ValueCalculated->removeItem(ui->ValueCalculated->currentIndex());
    ui->ValueCalculated->addItem(QString::number(value));
    ui->ValueCalculated->setCurrentText(QString::number(value));
}


void MainWindow::on_Zero_clicked()
{
    animationGroup0->start();

    string currentText = ui->ValueCalculated->currentText().toStdString();

    if (currentText != "")
    {
        currentText += "0";

        ui->ValueCalculated->removeItem(ui->ValueCalculated->currentIndex());
        ui->ValueCalculated->addItem(QString::fromStdString(currentText));
        ui->ValueCalculated->setCurrentText(QString::fromStdString(currentText));
    }

}


void MainWindow::on_Zero2_clicked()
{
    animationGroup00->start();

    string currentText = ui->ValueCalculated->currentText().toStdString();

    if (currentText != "")
    {
        currentText += "00";

        ui->ValueCalculated->removeItem(ui->ValueCalculated->currentIndex());
        ui->ValueCalculated->addItem(QString::fromStdString(currentText));
        ui->ValueCalculated->setCurrentText(QString::fromStdString(currentText));
    }
}

void MainWindow::on_C_clicked()
{
    animationGroupC->start();

    ui->ValueCalculated->removeItem(ui->ValueCalculated->currentIndex());
    ui->ValueCalculated->setCurrentText("");
}


void MainWindow::on_CE_clicked()
{
    animationGroupCE->start();

    ui->ValueCalculated->removeItem(ui->ValueCalculated->currentIndex());
    ui->ValueCalculated->setCurrentText("");
}


void MainWindow::on_Strelka_clicked()
{
    animationGroupStrelka->start();

    string currentText = ui->ValueCalculated->currentText().toStdString();

    if (currentText != "")
    {
        currentText.pop_back();

        ui->ValueCalculated->removeItem(ui->ValueCalculated->currentIndex());
        ui->ValueCalculated->addItem(QString::fromStdString(currentText));
        ui->ValueCalculated->setCurrentText(QString::fromStdString(currentText));
    }

}


void MainWindow::on_Point_clicked()
{
    animationGroupPoint->start();

    string currentText = ui->ValueCalculated->currentText().toStdString();

    if (currentText.find(".") == string::npos)
    {
        currentText += ".";

        ui->ValueCalculated->removeItem(ui->ValueCalculated->currentIndex());
        ui->ValueCalculated->addItem(QString::fromStdString(currentText));
        ui->ValueCalculated->setCurrentText(QString::fromStdString(currentText));
    }
}


void MainWindow::on_MS_clicked()
{
    animationGroupMS->start();

    ui->temporaryValue->setText(ui->ValueCalculated->currentText());

    tempValue = ui->ValueCalculated->currentText().toDouble();
}


void MainWindow::on_MR_clicked()
{
    animationGroupMR->start();

    QString currentText = ui->temporaryValue->text();

    ui->ValueCalculated->removeItem(ui->ValueCalculated->currentIndex());
    ui->ValueCalculated->addItem(currentText);
    ui->ValueCalculated->setCurrentText(currentText);
}


void MainWindow::on_MPlus_clicked()
{
    animationGroupMPlus->start();

    double currentValue = ui->temporaryValue->text().toDouble();
    ui->temporaryValue->setText(QString::number(currentValue + tempValue));
}


void MainWindow::on_MMinus_clicked()
{
    animationGroupMMinus->start();

    double currentValue = ui->temporaryValue->text().toDouble();
    ui->temporaryValue->setText(QString::number(currentValue - tempValue));
}



void MainWindow::on_MC_clicked()
{
    animationGroupMC->start();

    ui->temporaryValue->setText("");
}



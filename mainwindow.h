#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSequentialAnimationGroup>
#include <string>
#include <iostream>

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setButtonAnimation();
    void arifmOperations(char operation);
    void ClickProcessing(char operation);

private slots:
    void on_One_clicked();

    void on_Two_clicked();

    void on_Three_clicked();

    void on_Four_clicked();

    void on_Five_clicked();

    void on_Six_clicked();

    void on_Seven_clicked();

    void on_Eight_clicked();

    void on_Nine_clicked();

    void on_Zero_clicked();

    void on_Zero2_clicked();

    void on_Plus_clicked();

    void on_Equal_clicked();

    void on_Minus_clicked();

    void on_DelX_clicked();

    void on_Multiply_clicked();

    void on_Percent_clicked();

    void on_Del_clicked();

    void on_PlusMinus_clicked();

    void on_C_clicked();

    void on_CE_clicked();

    void on_Strelka_clicked();

    void on_Point_clicked();

    void on_MC_clicked();

    void on_MMinus_clicked();

    void on_MPlus_clicked();

    void on_MR_clicked();

    void on_MS_clicked();

private:
    Ui::MainWindow *ui;

    // Группа анимации для кнопки
    QSequentialAnimationGroup* animationGroup1;
    QSequentialAnimationGroup* animationGroup2;
    QSequentialAnimationGroup* animationGroup3;
    QSequentialAnimationGroup* animationGroup4;
    QSequentialAnimationGroup* animationGroup5;
    QSequentialAnimationGroup* animationGroup6;
    QSequentialAnimationGroup* animationGroup7;
    QSequentialAnimationGroup* animationGroup8;
    QSequentialAnimationGroup* animationGroup9;
    QSequentialAnimationGroup* animationGroup0;
    QSequentialAnimationGroup* animationGroup00;
    QSequentialAnimationGroup* animationGroupPoint;
    QSequentialAnimationGroup* animationGroupPlus;
    QSequentialAnimationGroup* animationGroupEqual;
    QSequentialAnimationGroup* animationGroupMinus;
    QSequentialAnimationGroup* animationGroupDelX;
    QSequentialAnimationGroup* animationGroupMultiply;
    QSequentialAnimationGroup* animationGroupPercent;
    QSequentialAnimationGroup* animationGroupDel;
    QSequentialAnimationGroup* animationGroupPlusMinus;
    QSequentialAnimationGroup* animationGroupC;
    QSequentialAnimationGroup* animationGroupCE;
    QSequentialAnimationGroup* animationGroupStrelka;

    QSequentialAnimationGroup* animationGroupMS;
    QSequentialAnimationGroup* animationGroupMR;
    QSequentialAnimationGroup* animationGroupMPlus;
    QSequentialAnimationGroup* animationGroupMMinus;
    QSequentialAnimationGroup* animationGroupMC;

    char lastOperation;
    char penultimateOperation;
    char penultimateOperationPrev;
    double ValueSaved;
    double valueForSavedOperation;
    bool repeatOperation;
    int CountOfOperations;
    string Formula;
    string Formuls;
    bool newValue;
    double tempValue;

};
#endif // MAINWINDOW_H

#ifndef MAFENETRE_H
#define MAFENETRE_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLCDNumber>
#include <QSlider>
#include <QVBoxLayout>
#include <QIcon>

class maFenetre : public QWidget
{
    Q_OBJECT
public:
    maFenetre();
    maFenetre(int height, int width=150);

public slots :


private:
    //pions
    QPushButton *m_b_p1;
    QPushButton *m_b_p2;
    QPushButton *m_b_p3;
    QPushButton *m_b_p4;
    QPushButton *m_b_p5;
    QPushButton *m_b_p6;
    QPushButton *m_b_p7;
    QPushButton *m_b_p8;

    //tour
    QPushButton *m_b_t1;
    QPushButton *m_b_t2;

    //cavalier
    QPushButton *m_b_c1;
    QPushButton *m_b_c2;

    //fou
    QPushButton *m_b_f1;
    QPushButton *m_b_f2;

    //reine
    QPushButton *m_b_d;

    //roi
    QPushButton *m_b_r;

    //naviguer au début
    QPushButton *m_bouton_start;
    QPushButton *m_bouton_quit;

    //icones de l'adversaire
    QPushButton *m_icon;

};

#endif // MAFENETRE_H

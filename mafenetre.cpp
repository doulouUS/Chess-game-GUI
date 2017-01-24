#include "MaFenetre.h"

maFenetre::maFenetre() : QWidget()
{
    setFixedSize(1000, 750);

    // Declaration pointeur
    m_bouton_start = new QPushButton("non", this);
    m_bouton_quit = new QPushButton("Quitter le jeu", this);
   // m_icon = new QPushButton("s",this);
/*
    m_b_p1 = new QPushButton("P",this);
    m_b_p2 = new QPushButton("P",this);
    m_b_p3 = new QPushButton("P",this);
    m_b_p4 = new QPushButton("P",this);
    m_b_p5 = new QPushButton("P",this);
    m_b_p6 = new QPushButton("P",this);
    m_b_p7 = new QPushButton("P",this);
    m_b_p8 = new QPushButton("P",this);

    m_b_t1 = new QPushButton("T",this);
    m_b_t2 = new QPushButton("T",this);

    m_b_c1 = new QPushButton("C",this);
    m_b_c2 = new QPushButton("C",this);

    m_b_f1 = new QPushButton("F",this);
    m_b_f2 = new QPushButton("F",this);

    m_b_d = new QPushButton("D",this);
    m_b_r = new QPushButton("R",this);

*/


    //creation layout
    QGridLayout *layout_grid = new QGridLayout(this);


    layout_grid->addWidget(m_bouton_start,0,0);
    layout_grid->addWidget(m_bouton_quit,0,1);

 /*
    //ajout layout

    layout_grid->addWidget(m_b_p1,1,0);
    layout_grid->addWidget(m_b_p2,1,1);
    layout_grid->addWidget(m_b_p3,1,2);
    layout_grid->addWidget(m_b_p4,1,3);
    layout_grid->addWidget(m_b_p5,1,4);
    layout_grid->addWidget(m_b_p6,1,5);
    layout_grid->addWidget(m_b_p7,1,6);
    layout_grid->addWidget(m_b_p8,1,7);
    //tours
    layout_grid->addWidget(m_b_t1,0,0);
    layout_grid->addWidget(m_b_t2,0,7);
    //cavaliers
    layout_grid->addWidget(m_b_c1,0,1);
    layout_grid->addWidget(m_b_c2,0,6);
    //fous
    layout_grid->addWidget(m_b_f1,0,2);
    layout_grid->addWidget(m_b_f2,0,5);
    //reine
    layout_grid->addWidget(m_b_d,0,3);
    //roi
    layout_grid->addWidget(m_b_r,0,4);
    layout_grid->addWidget(m_icon,7,0);




    //fenetre doit l'utiliser
    this->setLayout(layout_grid);

    //Styles&emplacements boutons


    m_bouton_quit->setFixedSize(QSize(300,20));


*/

    //Connexions
    QObject::connect(m_bouton_start, SIGNAL(clicked()), qApp, SLOT(quit()));//connexion au clic pour jouer
    QObject::connect(m_bouton_quit, SIGNAL(clicked()), qApp, SLOT(quit()));//connexion au clic pour quitter

}


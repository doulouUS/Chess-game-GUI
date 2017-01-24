#include <QApplication>
#include "mafenetre.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    //QFont police ("Courier");
    //bouton.setFont(police);

    maFenetre fenetre  ;
    fenetre.show();

    return app.exec();
}

#include "accueil.h"
#include <QVBoxLayout>
#include <iostream>
#include "projet.h"


Accueil::Accueil(QWidget *parent):QMainWindow(parent)
{
    longueur = 1245;
    largeur = 883;
    this->setWindowTitle("Accueil");
    this->setMinimumSize(longueur,largeur);
    this->setMaximumSize(longueur,largeur);


    label = new QLabel(this);
    label->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    label->setText("Pas de projet ouvert");
    label->setGeometry(QRect(500, 350, 150, 20));

    //ma->setGeometry(0, 0, 500, 500);
    nouveau_projet = new QPushButton("Nouveau projet", this);
    nouveau_projet->setGeometry(500, 400, 150, 50);

    charger_projet = new QPushButton("Charger projet", this);
    charger_projet->setGeometry(500, 450, 150, 50);

    connect(nouveau_projet, SIGNAL(clicked()), this, SLOT(ouvrir_projet()));
}

Accueil::~Accueil()
{
}

void Accueil::ouvrir_projet(){

    projet();
    delete(charger_projet);
    delete(nouveau_projet);
    delete(label);

}

void Accueil::projet(){
    Projet *p = new Projet(longueur, largeur);
    p->show();
    this->close();
}

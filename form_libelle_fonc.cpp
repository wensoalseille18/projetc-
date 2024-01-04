#include "form_libelle_fonc.h"
#include<QIcon>
#include"fonction.h"
#include<QMessageBox>
Form_Libelle_Fonc::Form_Libelle_Fonc(QWidget *parent) : QWidget(parent)
{
    setWindowIcon(QIcon("C:/Users/50946/Desktop/Projet_Final_cpp/vector-03.png"));
    setWindowTitle("Fonction d'un employer");
    setFixedSize(400,300);
    lcode=new QLabel("Code");
    llibelle=new QLabel("Libelle");

    tcode=new QLineEdit();
    tlibelle=new QLineEdit();

    bmodifer=new QPushButton("MODIFIER");
    bmodifer->setFixedSize(100,70);
    bcancel=new QPushButton("ANNULER");
    bcancel->setFixedSize(100,70);

    gridform=new QGridLayout();

    gridform->addWidget(lcode,0,0);
    gridform->addWidget(tcode,0,1);
    gridform->addWidget(llibelle,1,0);
    gridform->addWidget(tlibelle,1,1);

    gridform->addWidget(bcancel,6,2,7,2);
    gridform->addWidget(bmodifer,6,0,7,2);
    setLayout(gridform);
    connect(bmodifer,SIGNAL(clicked(bool)),this,SLOT(Modi()));
    connect(bcancel,SIGNAL(clicked(bool)),this,SLOT(Clean()));

}

void Form_Libelle_Fonc::Modi()
{
    Fonction fonction(tcode->text(),tlibelle->text());
if(Fonction::ModifierFonc(fonction)==true)
    QMessageBox::information(this,"Information","La Fonction est modifie avec SUCCES.");
else
    QMessageBox::information(NULL, "Information","LaFonction n'est pas modifie");

}

void Form_Libelle_Fonc::Clean()
{
    tcode->clear();
    tlibelle->clear();
}

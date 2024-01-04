#include "form_supp_fonc.h"
#include<QIcon>
#include"fonction.h"
#include<QMessageBox>
Form_Supp_Fonc::Form_Supp_Fonc(QWidget *parent) : QWidget(parent)
{
    setWindowIcon(QIcon("C:/Users/50946/Desktop/Projet_Final_cpp/vector-03.png"));
    setWindowTitle("Fonction d'un employer");
    setFixedSize(400,300);
    lcode=new QLabel("Code");

    tcode=new QLineEdit();

    bsupprimer=new QPushButton("SUPPRIMER");
    bsupprimer->setFixedSize(100,70);
    bcancel=new QPushButton("ANNULER");
    bcancel->setFixedSize(100,70);

    gridform=new QGridLayout();

    gridform->addWidget(lcode,0,0);
    gridform->addWidget(tcode,0,1);
    gridform->addWidget(bcancel,6,2,7,2);
    gridform->addWidget(bsupprimer,6,0,7,2);
    setLayout(gridform);

    connect(bsupprimer,SIGNAL(clicked(bool)),this,SLOT(SuppFonc()));
    connect(bcancel,SIGNAL(clicked(bool)),this,SLOT(Can()));
}


void Form_Supp_Fonc::SuppFonc()
{
    QString foncti=(tcode->text());
    if(Fonction::SuppriFonc(foncti)==true)
        QMessageBox::information(this,"Information","La Fonction est Supprime avec SUCCES.");
    else
        QMessageBox::information(NULL, "Information","La Fonction n'est pas Supprime");
}

void Form_Supp_Fonc::Can()
{
    tcode->clear();
}

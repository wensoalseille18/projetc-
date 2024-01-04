#include "form_code_fonc.h"
#include<QIcon>
#include"fonction.h"
#include<QMessageBox>
Form_Code_Fonc::Form_Code_Fonc(QWidget *parent) : QWidget(parent)
{
    setWindowIcon(QIcon("C:/Users/50946/Desktop/Projet_Final_cpp/vector-03.png"));
    setWindowTitle("Fonction d'un employer");
    setFixedSize(400,300);
    lcode=new QLabel("Code");
    llibelle=new QLabel("Libelle");

    tcode=new QLineEdit();
    tlibelle=new QLineEdit();

    bcreer=new QPushButton("CREER");
    bcreer->setFixedSize(100,70);
    bcancel=new QPushButton("ANNULER");
    bcancel->setFixedSize(100,70);

    gridform=new QGridLayout();

    gridform->addWidget(lcode,0,0);
    gridform->addWidget(tcode,0,1);
    gridform->addWidget(llibelle,1,0);
    gridform->addWidget(tlibelle,1,1);

    gridform->addWidget(bcancel,6,2,7,2);
    gridform->addWidget(bcreer,6,0,7,2);
    setLayout(gridform);

connect(bcreer,SIGNAL(clicked(bool)),this,SLOT(CrerFonc()));
connect(bcancel,SIGNAL(clicked(bool)),this,SLOT(ClearFonc()));

}

void Form_Code_Fonc::CrerFonc()
{
Fonction fonction(tcode->text(),tlibelle->text());
if(Fonction::CreerFonc(fonction)==true)
QMessageBox::information(this,"Information","Fonction Creer avec SUCCES");

}



void Form_Code_Fonc::ClearFonc()
{
tcode->clear();
tlibelle->clear();
}

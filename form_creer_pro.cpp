#include "form_creer_pro.h"
#include<QIcon>
#include"projet.h"
#include"QMessageBox"
Form_Creer_Pro::Form_Creer_Pro(QWidget *parent) : QWidget(parent)
{
    setWindowIcon(QIcon("C:/Users/50946/Desktop/Projet_Final_cpp/vector-03.png"));
    setWindowTitle("Creer Projet");
    setFixedSize(500,400);

    lcode_projet=new QLabel("Code Projet");
    lduree=new QLabel("Duree Projet");
    lcout_Estime=new QLabel("Cout Estime");


    tcode_projet=new QLineEdit();
    tdure=new QLineEdit();
    tcout_Estime=new QLineEdit();

    bsave=new QPushButton("ENREGISTRER");
    bsave->setFixedSize(100,70);
    bcancel=new QPushButton("ANNULER");
    bcancel->setFixedSize(100,70);

    gridform=new QGridLayout();

    gridform->addWidget(lcode_projet,0,0);
    gridform->addWidget(tcode_projet,0,1);
    gridform->addWidget(lduree,1,0);
    gridform->addWidget(tdure,1,1);
    gridform->addWidget(lcout_Estime,2,0);
    gridform->addWidget(tcout_Estime,2,1);

    gridform->addWidget(bsave,3,1,1,1);
    gridform->addWidget(bcancel,3,2,1,1);
    setLayout(gridform);

    connect(bsave,SIGNAL(clicked(bool)),this,SLOT(SaveInfo()));
    connect(bcancel,SIGNAL(clicked(bool)),this,SLOT(DelInfo()));
}

void Form_Creer_Pro::SaveInfo()
{
    Projet projet(tcode_projet->text(),tdure->text(),tcout_Estime->text());
if(Projet::CreerPro(projet)==true)
    QMessageBox::information(this,"Information","Succes");
}

void Form_Creer_Pro::DelInfo()
{
    tcode_projet->clear();
    tdure->clear();
    tcout_Estime->clear();
}

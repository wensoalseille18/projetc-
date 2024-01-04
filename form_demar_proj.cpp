#include "form_demar_proj.h"
#include<QIcon>
#include<QMessageBox>
#include"projet.h"
Form_Demar_Proj::Form_Demar_Proj(QWidget *parent) : QWidget(parent)
{
    setWindowIcon(QIcon("C:/Users/50946/Desktop/Projet_Final_cpp/vector-03.png"));
    setWindowTitle("A D F Projet");
    setFixedSize(500,400);

    lcode_projet=new QLabel("Code Projet");

    tcode_projet=new QLineEdit();


    bdema=new QPushButton("DEMARRER");
    bdema->setFixedSize(100,70);
    bpause=new QPushButton("PAUSE");
    bpause->setFixedSize(100,70);
    bfini=new QPushButton("FPNLAILSER");
    bfini->setFixedSize(100,70);


    gridform=new QGridLayout();

    gridform->addWidget(lcode_projet,0,0);
    gridform->addWidget(tcode_projet,0,1);


    gridform->addWidget(bdema,3,3);
    gridform->addWidget(bpause,4,4);
    gridform->addWidget(bfini,5,5);
    setLayout(gridform);

    connect(bdema,SIGNAL(clicked(bool)),this,SLOT(Demar()));
    connect(bpause,SIGNAL(clicked(bool)),this,SLOT(Pause()));
    connect(bfini,SIGNAL(clicked(bool)),this,SLOT(Fini()));
}

void Form_Demar_Proj::Demar()
{
    QString demaa=(tcode_projet->text());
    if(Projet::Demarre(demaa)==true)
        QMessageBox::information(this,"Information","Le Projet qui a pour Numero "+tcode_projet->text()+" est Demarre.");
    else
        QMessageBox::information(NULL, "Information","Le Projet n'est pas Demarre");
}
void Form_Demar_Proj::Pause()
{
    QString demaa=(tcode_projet->text());
    if(Projet::Pauser(demaa)==true)
        QMessageBox::information(this,"Information","Le Projet qui a pour Numero "+tcode_projet->text()+" est en Pause.");
    else
        QMessageBox::information(NULL, "Information","Le Projet n'est pas en Pause");
}
void Form_Demar_Proj::Fini()
{
    QString demaar=(tcode_projet->text());
    if(Projet::Finalise(demaar)==true)
        QMessageBox::information(this,"Information","Le Projet qui a pour Numero "+tcode_projet->text()+" est Fini.");
    else
        QMessageBox::information(NULL, "Information","Le Projet n'est pas Fini");
}

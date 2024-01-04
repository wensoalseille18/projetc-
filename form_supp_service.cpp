#include "form_supp_service.h"
#include<QIcon>
#include"service.h"
#include<QMessageBox>
Form_Supp_Service::Form_Supp_Service(QWidget *parent) : QWidget(parent)
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

    connect(bsupprimer,SIGNAL(clicked(bool)),this,SLOT(SuppSer()));
    connect(bcancel,SIGNAL(clicked(bool)),this,SLOT(CanSer()));
}

void Form_Supp_Service::SuppSer()
{
    QString service=(tcode->text());
    if(Service::SupprimerSer(service)==true)
        QMessageBox::information(this,"Information","Le service est Supprime avec SUCCES.");
    else
        QMessageBox::information(NULL, "Information","Le service n'est pas Supprime");
}

void Form_Supp_Service::CanSer()
{
    tcode->clear();
}

#include "form_ad_service.h"
#include<QIcon>
#include"service.h"
#include<QMessageBox>
Form_AD_Service::Form_AD_Service(QWidget *parent) : QWidget(parent)
{
    setWindowIcon(QIcon("C:/Users/50946/Desktop/Projet_Final_cpp/vector-03.png"));

    setWindowTitle("Activer Desactiver");
    setFixedSize(400,300);
    lcode=new QLabel("Code");

    tcode=new QLineEdit();


    bactiv=new QPushButton("ACTIVER");
    bactiv->setFixedSize(100,70);
    bdesac=new QPushButton("DESACTIVE");
    bdesac->setFixedSize(100,70);

    gridform=new QGridLayout();

    gridform->addWidget(lcode,0,0);
    gridform->addWidget(tcode,0,1);

    gridform->addWidget(bactiv,6,0,7,2);
    gridform->addWidget(bdesac,6,2,7,2);
    setLayout(gridform);

connect(bactiv,SIGNAL(clicked(bool)),this,SLOT(ActiSer()));
connect(bdesac,SIGNAL(clicked(bool)),this,SLOT(DesacSer()));

}

void Form_AD_Service::ActiSer()
{
QString service=(tcode->text());
if(Service::ActivServ(service)==true)
    QMessageBox::information(this,"Information","Le Service qui a pour Numero "+tcode->text()+" est Active.");
else
    QMessageBox::information(NULL, "Information","Le Service n'est pas Active");

}

void Form_AD_Service::DesacSer()
{
QString service=(tcode->text());
if(Service::DesacServ(service)==true)
    QMessageBox::information(this,"Information","Le Service qui a pour Numero "+tcode->text()+" est Desactive.");
else
    QMessageBox::information(NULL, "Information","Le Service n'est pas Desactive");
}

#include "form_cre_service.h"
#include<QIcon>
#include"service.h"
#include<QMessageBox>
Form_Cre_Service::Form_Cre_Service(QWidget *parent) : QWidget(parent)
{
    setWindowIcon(QIcon("C:/Users/50946/Desktop/Projet_Final_cpp/vector-03.png"));

    setWindowTitle("Service d'un employer");
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

connect(bcreer,SIGNAL(clicked(bool)),this,SLOT(CrerSer()));
connect(bcancel,SIGNAL(clicked(bool)),this,SLOT(ClearSer()));

}

void Form_Cre_Service::CrerSer()
{
Service service(tcode->text(),tlibelle->text());
if(Service::CreerSer(service)==true)
QMessageBox::information(this,"Information","Service Creer avec SUCCES");
}

void Form_Cre_Service::ClearSer()
{
tcode->clear();
tlibelle->clear();
}

#include "form_modi_service.h"
#include"service.h"
#include<QIcon>
#include<QMessageBox>
Form_Modi_Service::Form_Modi_Service(QWidget *parent) : QWidget(parent)
{
    setWindowIcon(QIcon("C:/Users/50946/Desktop/Projet_Final_cpp/vector-03.png"));

setWindowTitle("Service d'un employer");
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
connect(bmodifer,SIGNAL(clicked(bool)),this,SLOT(ModiSer()));
connect(bcancel,SIGNAL(clicked(bool)),this,SLOT(CleanSer()));

}

void Form_Modi_Service::ModiSer()
{
Service service(tcode->text(),tlibelle->text());
if(Service::ModifierSer(service)==true)
QMessageBox::information(this,"Information","Le service est modifie avec SUCCES.");
else
QMessageBox::information(NULL, "Information","Le service n'est pas modifie");

}

void Form_Modi_Service::CleanSer()
{
tcode->clear();
tlibelle->clear();
}

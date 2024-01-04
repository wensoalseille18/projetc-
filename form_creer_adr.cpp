#include "form_creer_adr.h"
#include"adresse.h"
#include<QMessageBox>
#include<QIcon>
Form_Creer_Adr::Form_Creer_Adr(QWidget *parent) : QWidget(parent)
{
    setWindowIcon(QIcon("C:/Users/50946/Desktop/Projet_Final_cpp/vector-03.png"));

    setWindowTitle("Creer Adresse");
    setFixedSize(500,400);

    lno_Adresse=new QLabel("No. Adresse");
    lline_Adresse=new QLabel("Ligne Adresse");
    ldepartement=new QLabel("Departement");
    lcommune=new QLabel("Commune");
    ltelephone=new QLabel("Telephone");

    tno_Adresse=new QLineEdit();
    tline_Adresse=new QLineEdit();
    tdepartement=new QLineEdit();
    tcommune=new QLineEdit();
    ttelephone=new QLineEdit();

    bsave=new QPushButton("ENREGISTRER");
    bsave->setFixedSize(100,70);
    bcancel=new QPushButton("ANNULER");
    bcancel->setFixedSize(100,70);

    gridform=new QGridLayout();

    gridform->addWidget(lno_Adresse,0,0);
    gridform->addWidget(tno_Adresse,0,1);
    gridform->addWidget(lline_Adresse,1,0);
    gridform->addWidget(tline_Adresse,1,1);
    gridform->addWidget(ldepartement,2,0);
    gridform->addWidget(tdepartement,2,1);
    gridform->addWidget(lcommune,3,0);
    gridform->addWidget(tcommune,3,1);
    gridform->addWidget(ltelephone,4,0);
    gridform->addWidget(ttelephone,4,1);
    gridform->addWidget(bsave,6,1,1,1);
    gridform->addWidget(bcancel,6,2,1,1);

    setLayout(gridform);

connect(bcancel,SIGNAL(clicked(bool)),this,SLOT(ClearAdr()));
connect(bsave,SIGNAL(clicked(bool)),this,SLOT(Newadr()));

}

void Form_Creer_Adr::Newadr()
{
Adresse adresse(tno_Adresse->text(),tline_Adresse->text(),tdepartement->text(),tcommune->text(),ttelephone->text());
if(Adresse::CreerAdresse(adresse)==true)
QMessageBox::information(this,"Information","Adresse Creer avec SUCCES");

}



void Form_Creer_Adr::ClearAdr()
{
tno_Adresse->clear();
tline_Adresse->clear();
tdepartement->clear();
tcommune->clear();
ttelephone->clear();
}

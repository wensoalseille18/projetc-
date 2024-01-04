#include "form_supp_ad.h"
#include"adresse.h"
#include<QMessageBox>
#include<QIcon>
Form_Supp_Ad::Form_Supp_Ad(QWidget *parent) : QWidget(parent)
{
    setWindowIcon(QIcon("C:/Users/50946/Desktop/Projet_Final_cpp/vector-03.png"));
    setWindowTitle("Supprimer un Adresse");
    setFixedSize(700,600);

    lno_Adresse=new QLabel("No Adresse");
    lline_Adresse=new QLabel("Ligne Adresse");
    ldepartement=new QLabel("Departement");
    lcommune=new QLabel("Commune");
    ltelephone=new QLabel("Telephone");

    tno_Adresse=new QLineEdit();
    tline_Adresse=new QLineEdit();
    tdepartement=new QLineEdit();
    tcommune=new QLineEdit();
    ttelephone=new QLineEdit();

    bsupprimer=new QPushButton("SUPPRIMER");
    bsupprimer->setFixedSize(90,50);
    bcancel=new QPushButton("ANNULER");
    bcancel->setFixedSize(90,50);

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
    gridform->addWidget(bsupprimer,6,0);
    gridform->addWidget(bcancel,6,1);
    setLayout(gridform);

    connect(bsupprimer,SIGNAL(clicked(bool)),this,SLOT(Suppri()));
    connect(bcancel,SIGNAL(clicked(bool)),this,SLOT(Annul()));

}


void Form_Supp_Ad::Suppri()
{
//    QString noadress=(tno_Adresse->text());
//    QString lineadresse=(tline_Adresse->text());
//    QString departement=(tdepartement->text());
//    QString comune=(tcommune->text());
//    QString telephone=(ttelephone->text());
    QString adresse=(tno_Adresse->text());
    if(Adresse::SupprimerAdresse(adresse)==true)
        QMessageBox::information(this,"Information","L'Adresse est Supprime avec SUCCES.");
    else
        QMessageBox::information(NULL, "Information","l'Adresse n'est pas Supprime");
}


void Form_Supp_Ad::Annul()
{
    tno_Adresse->clear();
    tline_Adresse->clear();
    tdepartement->clear();
    tcommune->clear();
    ttelephone->clear();
}

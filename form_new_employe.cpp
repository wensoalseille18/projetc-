#include "form_new_employe.h"
#include "employe.h"
#include <QMessageBox>
#include<QIcon>
Form_New_Employe::Form_New_Employe(QWidget *parent) : QWidget(parent)
{

    setWindowIcon(QIcon("C:/Users/50946/Desktop/Projet_Final_cpp/vector-03.png"));

    setWindowTitle("Moidifier un employer");
    setFixedSize(500,400);
    lnumero=new QLabel("Numero");
    lnom=new QLabel("Nom");
    lprenom=new QLabel("Prenom");
    lmail=new QLabel("Mail");
    lsalaire=new QLabel("Salaire");
    ltelephone=new QLabel("Telephone");
    ldateEntre=new QLabel("Date_Entrer");

    tnumero=new QLineEdit();
    tnom=new QLineEdit();
    tprenom=new QLineEdit();
    tmail=new QLineEdit();
    tsalaire=new QLineEdit();
    ttelephone=new QLineEdit();
    tdateEntre=new QLineEdit();

    bsave=new QPushButton("ENREGISTRER");
    bsave->setFixedSize(100,70);
    bcancel=new QPushButton("ANNULER");
    bcancel->setFixedSize(100,70);

    gridform=new QGridLayout();

    gridform->addWidget(lnumero,0,0);
    gridform->addWidget(tnumero,0,1);
    gridform->addWidget(lnom,1,0);
    gridform->addWidget(tnom,1,1);
    gridform->addWidget(lprenom,2,0);
    gridform->addWidget(tprenom,2,1);
    gridform->addWidget(lmail,3,0);
    gridform->addWidget(tmail,3,1);
    gridform->addWidget(lsalaire,4,0);
    gridform->addWidget(tsalaire,4,1);
    gridform->addWidget(ltelephone,5,0);
    gridform->addWidget(ttelephone,5,1);
    gridform->addWidget(ldateEntre,6,0);
    gridform->addWidget(tdateEntre,6,1);
    gridform->addWidget(bsave,7,0,8,2);
    gridform->addWidget(bcancel,7,2,8,2);
    setLayout(gridform);

    connect(bcancel,SIGNAL(clicked(bool)),this,SLOT(ClearText()));
    connect(bsave,SIGNAL(clicked(bool)),this,SLOT(SaveInfos()));

}

void Form_New_Employe::SaveInfos()
{
    Employe employe(tnumero->text(),tnom->text(),tprenom->text(),tmail->text(),ttelephone->text(),tsalaire->text(),tdateEntre->text());
if(Employe::Creer(employe)==true)
    QMessageBox::information(this,"Information","Succes");

}

void Form_New_Employe::ClearText()
{
    tnumero->clear();
    tnom->clear();
    tprenom->clear();
    tmail->clear();
    ttelephone->clear();
    tsalaire->clear();
    tdateEntre->clear();
}

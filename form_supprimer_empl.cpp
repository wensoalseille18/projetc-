#include "form_supprimer_empl.h"
#include "employe.h"
#include<QMessageBox>
#include<QIcon>
Form_Supprimer_Empl::Form_Supprimer_Empl(QWidget *parent) : QWidget(parent)
{
    setWindowIcon(QIcon("C:/Users/50946/Desktop/Projet_Final_cpp/vector-03.png"));
    setWindowTitle("Supprimer un employer");
    setFixedSize(500,400);

    lnumero=new QLabel("Saisir Numero");

    tnumero=new QLineEdit();

    bsupprimer=new QPushButton("Supprimer");
    bsupprimer->setFixedSize(90,50);

    gridform=new QGridLayout();

    gridform->addWidget(lnumero,3,0);
    gridform->addWidget(tnumero,3,1);
    gridform->addWidget(bsupprimer,3,3);
    setLayout(gridform);

    connect(bsupprimer,SIGNAL(clicked(bool)),this,SLOT(Supprimer()));
}



void Form_Supprimer_Empl::Supprimer()
{
    QString employe=(tnumero->text());
    if(Employe::Supprimer(employe)==true)
        QMessageBox::information(this,"Information","L'employe qui a pour Numero "+tnumero->text()+" est Supprime avec SUCCES.");
    else
        QMessageBox::information(NULL, "Information","l'Employe n'est pas Supprime");
}

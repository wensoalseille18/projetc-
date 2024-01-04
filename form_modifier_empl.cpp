#include "form_modifier_empl.h"
#include "employe.h"
#include "QMessageBox"
#include<QIcon>
Form_Modifier_Empl::Form_Modifier_Empl(QWidget *parent) : QWidget(parent)
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

    brechercher=new QPushButton("RECHERCHER");
    brechercher->setFixedSize(100,70);
    bmodifier=new QPushButton("MODIFIER");
    bmodifier->setFixedSize(100,70);
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
    gridform->addWidget(bmodifier,7,0,8,0);
    gridform->addWidget(bcancel);
    gridform->addWidget(brechercher,7,2,8,2);

    setLayout(gridform);

    connect(brechercher,SIGNAL(clicked(bool)),this,SLOT(Rechercher()));
    connect(bmodifier,SIGNAL(clicked(bool)),this,SLOT(Modifier()));
    connect(bcancel,SIGNAL(clicked(bool)),this,SLOT(ClearText()));

}


void Form_Modifier_Empl::Rechercher()
{
    QSqlQuery fini=Employe::Rechercher(tnumero->text());
    if(fini.next())
    {
        tnom->setText(fini.value(1).toString());
        tprenom->setText(fini.value(2).toString());
        tmail->setText(fini.value(3).toString());
        tsalaire->setText(fini.value(5).toString());
        ttelephone->setText(fini.value(4).toString());
        tdateEntre->setText(fini.value(6).toString());
    }
    else
        QMessageBox::information(this,"Information","Les infos n'appartient pas a aucun Employe");
}

void Form_Modifier_Empl::Modifier()
{
    Employe employe(tnumero->text(),tnom->text(),tprenom->text(),tmail->text(),tsalaire->text(),ttelephone->text(),tdateEntre->text());
if(Employe::Modifier(employe)==true)
    QMessageBox::information(this,"Information","L'employe qui a pour Numero "+tnumero->text()+" est modifie avec SUCCES.");
else
    QMessageBox::information(NULL, "Information","L'employe n'est pas modifie");
}

void Form_Modifier_Empl::ClearText()
{
    tnumero->clear();
    tnom->clear();
    tprenom->clear();
    tmail->clear();
    ttelephone->clear();
    tsalaire->clear();
    tdateEntre->clear();
}

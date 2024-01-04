#include "form_affecter.h"
#include<QIcon>
#include"affectation.h"
#include<QMessageBox>
Form_Affecter::Form_Affecter(QWidget *parent) : QWidget(parent)
{
    setWindowIcon(QIcon("C:/Users/50946/Desktop/Projet_Final_cpp/vector-03.png"));

    setWindowTitle("AFFECTER DESAFFECTER");
    setFixedSize(400,300);

    lno_employe=new QLabel("Numero_Employe");
     lcode_projet=new QLabel("Code_Projet");
    ldate_affectation= new QLabel("Date_Affectation");

     tno_employe=new QLineEdit();
    tcode_projet=new QLineEdit();
    tdate_affectation=new QLineEdit();

    baffecter=new QPushButton("AFFECTER");
    baffecter->setFixedSize(100,70);

    bdesaffecter=new QPushButton("DESAFFECTER");
    bdesaffecter->setFixedSize(100,70);

      gridform=new QGridLayout();

      gridform->addWidget(lno_employe,0,0);
      gridform->addWidget(tno_employe,0,1);
      gridform->addWidget(lcode_projet,1,0);
      gridform->addWidget(tcode_projet,1,1);
      gridform->addWidget(ldate_affectation,2,0);
      gridform->addWidget(tdate_affectation,2,1);
      gridform->addWidget(baffecter,3,0,0,2);
      gridform->addWidget(bdesaffecter,3,2,1,2);
      setLayout(gridform);
      connect(baffecter,SIGNAL(clicked(bool)),this,SLOT(Affecter()));
      connect(bdesaffecter,SIGNAL(clicked(bool)),this,SLOT(Desaffecter()));

}
void Form_Affecter::Affecter()
{
    Affectation affectation(tno_employe->text(),tcode_projet->text(),tdate_affectation->text());
    if(Affectation::Affecter(affectation)==true)
        QMessageBox::information(this,"Information","L'employe qui a pour Numero "+tno_employe->text()+" est affecte au projet de "+tcode_projet->text()+".");
    else
        QMessageBox::information(NULL, "Information","L'employe n'est pas affecter.");

}

void Form_Affecter::Desaffecter()
{
    QString numero=(tno_employe->text());
    if(Affectation::Desaffecter(numero)==true)
        QMessageBox::information(this,"Information","Employe desaffecter.");
    else
        QMessageBox::information(NULL, "Information","L'employe n'est pas desaffecter");
}

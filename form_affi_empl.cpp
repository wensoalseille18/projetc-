#include "form_affi_empl.h"
#include <QSqlQuery>
#include"employe.h"
#include"database.h"
#include<QSqlQueryModel>
#include<QIcon>
Form_Affi_Empl::Form_Affi_Empl(QWidget *parent) : QWidget(parent)
{
    setWindowIcon(QIcon("C:/Users/50946/Desktop/Projet_Final_cpp/vector-03.png"));

setWindowTitle("Affichage");
setFixedSize(750,600);

lcritere=new QLabel ("Par quoi vous voulez faire votre recherche?");
combocritere=new QComboBox();
combocritere->addItem("Numero");
combocritere->addItem("Nom");
combocritere->addItem("Prenom");
combocritere->addItem("Mail");
combocritere->addItem("Telephone");
champ=new QLineEdit;
brechercher=new QPushButton("Rechercher");


layoutcritere=new QGridLayout();
layoutcritere->addWidget(lcritere,0,0);
layoutcritere->addWidget(combocritere,0,1);
layoutcritere->addWidget(champ,0,2);
layoutcritere->addWidget(brechercher,0,3);

connect(brechercher,SIGNAL(clicked(bool)),this,SLOT(Affichage()));
tableaffichage=new QTableView();
tableaffichage->setAutoFillBackground(true);
tableaffichage->setAutoScroll(true);

layoutprincipal=new QVBoxLayout();
layoutprincipal->addLayout(layoutcritere);
layoutprincipal->addWidget(tableaffichage);

setLayout(layoutprincipal);

}

void Form_Affi_Empl::Affichage()
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Data_Projet");
    db.setUserName("root");
    db.setPassword("");
    if(db.open())
    {
        QSqlQueryModel * model=new QSqlQueryModel();
        QString pran;
        if(champ->text()=="")
            pran="select* from employe";
        else
            pran="select* from employe where "+combocritere->currentText()+"='"+champ->text()+"'";
        model->setQuery(pran);
        if(model)
            tableaffichage->setModel(model);
        else
            QMessageBox::information(NULL,"Test","Erreur");
        }
    }

#include "form_aff_ser.h"
#include <QSqlQuery>
#include"employe.h"
#include"database.h"
#include<QSqlQueryModel>
#include<QIcon>

Form_Aff_Ser::Form_Aff_Ser(QWidget *parent) : QWidget(parent)
{
    setWindowIcon(QIcon("C:/Users/50946/Desktop/Projet_Final_cpp/vector-03.png"));

setWindowTitle("Affichage");
setFixedSize(500,400);

lcritere=new QLabel ("Par quoi vous voulez faire votre recherche?");
combocritere=new QComboBox();
combocritere->addItem("Code");
combocritere->addItem("Libelle");
combocritere->addItem("Date_Affectation");
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

void Form_Aff_Ser::Affichage()
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
            pran="select* from service";
        else
            pran="select* from service where "+combocritere->currentText()+"='"+champ->text()+"'";
        model->setQuery(pran);
        if(model)
            tableaffichage->setModel(model);
        else
            QMessageBox::information(NULL,"Test","Erreur");
        }
    }


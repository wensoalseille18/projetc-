#include"form_demar_pro.h"
#include<QIcon>
#include<QMessageBox>
#include"projet.h"

Form_Demar_Pro::Form_Demar_Pro(QWidget *parent) : QWidget(parent)
{
    setWindowIcon(QIcon("C:/Users/50946/Desktop/Projet_Final_cpp/vector-03.png"));
    setWindowTitle("Etat Actuel Projet");
    setFixedSize(700,600);

    lcode_Pro=new QLabel("Code_Projet");
    tcode_Pro=new QLineEdit();

    bdemar=new QPushButton("DEMMARE");
    bdemar->setFixedSize(100,70);
//    bpause=new QPushButton("PAUSE");
//    bpause->setFixedSize(100,70);
//    bfini=new QPushButton("Finaliser");
//    bfini->setFixedSize(100,70);

    gridform=new QGridLayout();

    gridform->addWidget(lcode_Pro,0,0);
    gridform->addWidget(tcode_Pro,0,1);

    gridform->addWidget(bdemar,4,0,5,2);
//    gridform->addWidget(bpause,4,1,5,2);
//    gridform->addWidget(bfini,4,2,5,2);
    setLayout(gridform);

    connect(bdemar,SIGNAL(clicked(bool)),this,SLOT(Demar()));
//    connect(bpause,SIGNAL(clicked(bool)),this,SLOT(Pause()));
//    connect(bfini,SIGNAL(clicked(bool)),this,SLOT(Fini()));
}
void Form_Demar_Pro::Demar()
{
    QString projet=(tcode_Pro->text());
    if(Projet::Demarre(projet)==true)
    QMessageBox::information(this,"Information","Le Projet qui a pour Code "+tcode_Pro->text()+" est Demarre.");
    else
    QMessageBox::information(NULL, "Information","Le Projet n'est pas Demarre");

}

//void Form_Demar_Pro::Pause()
//{
//    QString projet=(tcode_Pro->text());
//    if(Projet::Pause(projet)==true)
//    QMessageBox::information(this,"Information","Le Projet qui a pour Code "+tcode_Pro->text()+" est en Pause.");
//    else
//    QMessageBox::information(NULL, "Information","Le Projet n'est pas en Pause");

//}

//void Form_Demar_Pro::Fini()
//{
//    QString projet=(tcode_Pro->text());
//    if(Projet::Fini(projet)==true)
//    QMessageBox::information(this,"Information","Le Projet qui a pour Code "+tcode_Pro->text()+" est Fini.");
//    else
//    QMessageBox::information(NULL, "Information","Le Projet n'est pas Fini");

//}

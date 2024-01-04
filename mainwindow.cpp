#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "form_creer_adr.h"
#include "form_modi_ad.h"
#include "form_supp_ad.h"
#include "form_code_fonc.h"
#include "form_libelle_fonc.h"
#include "form_supp_fonc.h"
#include "form_creer_pro.h"
#include "form_affecter.h"
#include "form_desaffecter.h"
#include "form_new_employe.h"
#include "form_modifier_empl.h"
#include "form_supprimer_empl.h"
#include "form_cre_service.h"
#include "form_modi_service.h"
#include "form_supp_service.h"
#include "form_ad_service.h"
#include "form_affi_empl.h"
#include<QIcon>
#include"form_aff_ser.h"
#include"form_aff_adr.h"
#include"form_aff_fonc.h"
#include"form_aff_pro.h"
#include"form_aff_af.h"
#include"form_demar_proj.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Authentique V 0.1");
    setWindowIcon(QIcon("C:/Users/50946/Desktop/Projet_Final_cpp/vector-03.png"));
    QPixmap fo("C:/Users/50946/Desktop/Projet_Final_cpp/e09.png");
    ui->labelUi->setPixmap(fo);
    setWindowState(Qt::WindowMaximized);

    Employe=menuBar()->addMenu("Employe");
    Adresse=menuBar()->addMenu("Adresse");
    Service=menuBar()->addMenu("Service");
    Fonction=menuBar()->addMenu("Fonction");
    Affectation=menuBar()->addMenu("Affectation");
    Projet=menuBar()->addMenu("Projet");

    //Creation des sous menu
    Cre_Emp=new QAction("Nouveau Employer", this);
    Modi_Emp=new QAction("Modifier et Rechercher Employer", this);
    Suppr_Emp=new QAction("Supprimer Employer", this);
    Afficher=new QAction("Afficher Employe",this);
    Employe->addAction(Cre_Emp);
    Employe->addAction(Modi_Emp);
    Employe->addAction(Suppr_Emp);
    Employe->addAction(Afficher);

    connect(Cre_Emp,SIGNAL(triggered(bool)),new Form_New_Employe,SLOT(show()));
    connect(Modi_Emp,SIGNAL(triggered(bool)),new Form_Modifier_Empl,SLOT(show()));
    connect(Suppr_Emp,SIGNAL(triggered(bool)),new Form_Supprimer_Empl,SLOT(show()));
    connect(Afficher,SIGNAL(triggered(bool)),new Form_Affi_Empl,SLOT(show()));

    //Creation du sous menu Adresse
    Creer_Ad=new QAction("Creer Adresse",this);
    Modif_Ad=new QAction("Modifier Adresse",this);
    Suppri_Ad=new QAction("Supprimer Adresse",this);
    AffiAdr=new QAction("Afficher Adresse",this);
    connect(Creer_Ad, SIGNAL(triggered(bool)),new Form_Creer_Adr,SLOT(show()));
    connect(Modif_Ad, SIGNAL(triggered(bool)),new Form_Modi_Ad,SLOT(show()));
    connect(Suppri_Ad, SIGNAL(triggered(bool)),new Form_Supp_Ad,SLOT(show()));
    connect(AffiAdr,SIGNAL(triggered(bool)),new Form_Aff_Adr,SLOT(show()));
    Adresse->addAction(Creer_Ad);
    Adresse->addAction(Modif_Ad);
    Adresse->addAction(Suppri_Ad);
    Adresse->addAction(AffiAdr);

    //Creation du sous menu Fonction
    Creer_Fonc=new QAction("Creer Fonction",this);
    Modifier_Fonc=new QAction("Modifier Fonction",this);
    Suppri_Fonc=new QAction("Supprimer Fonction",this);
    AffFonc=new QAction("Afficher Fonction",this);
    connect(Creer_Fonc, SIGNAL(triggered(bool)),new Form_Code_Fonc,SLOT(show()));
    connect(Modifier_Fonc, SIGNAL(triggered(bool)),new Form_Libelle_Fonc,SLOT(show()));
    connect(Suppri_Fonc, SIGNAL(triggered(bool)),new Form_Supp_Fonc,SLOT(show()));
    connect(AffFonc,SIGNAL(triggered(bool)),new Form_Aff_Fonc,SLOT(show()));
    Fonction->addAction(Creer_Fonc);
    Fonction->addAction(Modifier_Fonc);
    Fonction->addAction(Suppri_Fonc);
    Fonction->addAction(AffFonc);

    //Creation du sous menu Projet
    Creer_Pro=new QAction("Creer Projet", this);
    Demarrer_Pro=new QAction("Etat Du Projet", this);

    AffPro=new QAction("Afficher Projet",this);
    connect(Creer_Pro, SIGNAL(triggered(bool)),new Form_Creer_Pro,SLOT(show()));
    connect(Demarrer_Pro,SIGNAL(triggered(bool)),new Form_Demar_Proj,SLOT(show()));
    connect(AffPro,SIGNAL(triggered(bool)),new Form_Aff_Pro,SLOT(show()));
    Projet->addAction(Creer_Pro);
    Projet->addAction(Demarrer_Pro);
//    Projet->addAction(Pause_Pro);
//    Projet->addAction(Finaliser_Pro);
    Projet->addAction(AffPro);

    //Creation du sous menu Affectation
    Affecter=new QAction("Affecter Desaffecter",this);
    Affect=new QAction("Afficher Affectation",this);
    connect(Affecter, SIGNAL(triggered(bool)),new Form_Affecter,SLOT(show()));
    connect(Affect,SIGNAL(triggered(bool)),new Form_Aff_Af,SLOT(show()));
    Affectation->addAction(Affecter);
    Affectation->addAction(Affect);

    //Le sous menu Service
    Creer_Service=new QAction("Creer",this);
    Modifier_Service=new QAction("Modifier",this);
    Supprimer_Service=new QAction("Supprimer",this);
    Activer_Desactiver_Service=new QAction("Activer ou Desactiver",this);
    AffSer=new QAction("Afficher Service",this);
    connect(Creer_Service, SIGNAL(triggered(bool)),new Form_Cre_Service, SLOT(show()));
    connect(Modifier_Service, SIGNAL(triggered(bool)),new Form_Modi_Service, SLOT(show()));
    connect(Supprimer_Service, SIGNAL(triggered(bool)),new Form_Supp_Service, SLOT(show()));
    connect(Activer_Desactiver_Service, SIGNAL(triggered(bool)),new Form_AD_Service, SLOT(show()));
    connect(AffSer,SIGNAL(triggered(bool)),new Form_Aff_Ser,SLOT(show()));
    Service->addAction(Creer_Service);
    Service->addAction(Modifier_Service);
    Service->addAction(Supprimer_Service);
    Service->addAction(Activer_Desactiver_Service);
    Service->addAction(AffSer);

}

MainWindow::~MainWindow()
{
    delete ui;
}

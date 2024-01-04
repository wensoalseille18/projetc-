#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    //Declaration des Menu
    QMenu * Employe;
    QMenu * Adresse;
    QMenu * Service;
    QMenu * Fonction;
    QMenu * Affectation;
    QMenu * Projet;

    //Declaration des sous Menu
    QAction * Cre_Emp;
    QAction * Modi_Emp;
    QAction * Suppr_Emp;
    QAction * Afficher;

    QAction * Creer_Ad;
    QAction * Modif_Ad;
    QAction * Suppri_Ad;
    QAction * AffiAdr;

    QAction * Creer_Fonc;
    QAction * Modifier_Fonc;
    QAction * Suppri_Fonc;
    QAction * AffFonc;

    QAction * Creer_Pro;
    QAction * Demarrer_Pro;
//    QAction * Pause_Pro;
//    QAction * Finaliser_Pro;
    QAction * AffPro;

    QAction * Affecter;
    QAction * Affect;

    QAction * Creer_Service;
    QAction * Modifier_Service;
    QAction * Supprimer_Service;
    QAction * Activer_Desactiver_Service;
    QAction * AffSer;
};

#endif // MAINWINDOW_H

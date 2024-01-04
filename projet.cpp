#include "projet.h"
#include<QString>
#include"database.h"
Projet::Projet(QString co, QString du, QString cou)
{
    codeProjet=co;
    duree=du;
    coutEstime=cou;
}

bool Projet::CreerPro(Projet projet)
{
    DataBase dataser;
    QString reqSer="INSERT INTO projet (Code_Projet, Duree, Cout_Estime, Etat_Actuel)VALUES('"+projet.getCodeProjet()+"','"+projet.getDuree()+"','"+projet.getCoutEstime()+"','Creer')";
    return dataser.requeteCreerPro(reqSer);
}

bool Projet::Demarre(QString code)
{
    DataBase dat;
    QString Act="update projet set Code_Projet='"+code+"',Etat_Actuel='Demarrer'";
    return dat.requeteMofiSer(Act);
}

bool Projet::Finalise(QString coode)
{
    DataBase dat;
    QString Act="update projet set Code_Projet='"+coode+"',Etat_Actuel='Fini'";
    return dat.requeteMofiSer(Act);
}

bool Projet::Pauser(QString codee)
{
    DataBase daat;
    QString Acti="update projet set Code_Projet='"+codee+"',Etat_Actuel='Pause'";
    return daat.requeteMofiSer(Acti);
}



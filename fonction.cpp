#include "fonction.h"
#include<QString>
#include"database.h"
Fonction::Fonction(QString c, QString li)
{
    code=c;
    libelle=li;
}

bool Fonction::CreerFonc(Fonction fonction)
{
    DataBase datafonc;
    QString reql="INSERT INTO fonction (Code, Libelle)VALUES('"+fonction.getCode()+"','"+fonction.getLibelle()+"')";
    return datafonc.requeteCreerFonc(reql);
}
bool Fonction::ModifierFonc(Fonction fonction)
{
    DataBase datf;
    QString modi="update fonction set code='"+fonction.getCode()+"',libelle='"+fonction.getLibelle()+"'";
    return datf.requeteMofiFonc(modi);
}

bool Fonction::SuppriFonc(QString code)
{
    DataBase DataSupr;
    QString sup="DELETE FROM fonction WHERE code='"+code+"'";
    return DataSupr.requeteSupFonc(sup);
}


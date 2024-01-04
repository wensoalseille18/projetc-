#include "affectation.h"
#include<QString>
#include"database.h"

Affectation::Affectation(QString nu, QString cod, QString dat)
{
    numeroEmp=nu;
    codeProjet=cod;
    dateAffectation=dat;
}

bool Affectation::Affecter(Affectation affectation)
{
    DataBase database;
    QString reql="INSERT INTO affectation(Numero_Emp,Code_Projet,Date_Affectation)VALUES('"+affectation.getNumeroEmp()+"','"+affectation.getCodeProjet()+"','"+affectation.getDateAffectation()+"')";
    return database.requeteCreerPro(reql);
}

bool Affectation::Desaffecter(QString nu)
{
  DataBase datab;
  QString req="DELETE FROM affectation WHERE Numero_Emp='"+nu+"'";
    return datab.requeteSupFonc(req);
}

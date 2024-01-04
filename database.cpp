#include "database.h"

DataBase::DataBase()
{  
QSqlDatabase db=QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("Data_Projet");
db.setUserName("root");
db.setPassword("");
if(db.open()==false)
    QMessageBox::information(NULL,"message",""+db.lastError().text());

}
bool DataBase::requeteEnregistrer(QString enre)
{
QSqlQuery query;
bool etat=false;
        if(query.exec(enre))
        etat=true;
        else
            QMessageBox::information(NULL,"information",""+query.lastError().text());
        return etat;
}

bool DataBase::requeteModifier(QString mod)
{
    QSqlQuery query;
    if(!query.exec(mod))
        return false;
    else
        return true;
}

QSqlQuery DataBase::requeteRechercher(QString mod)
{
    QSqlQuery query;
    if(query.exec(mod)==false)

        QMessageBox::information(NULL,"Information",""+query.lastError().text());
    return query;

}

bool DataBase::requeteSupprimer(QString supp)
{
    QSqlQuery query;
    if(!query.exec(supp))
        return false;
    else
        return true;
}

bool DataBase::requeteCreerAdr(QString EnreAdre)
{
QSqlQuery query;
bool etat=false;
        if(query.exec(EnreAdre))
        etat=true;
        else
            QMessageBox::information(NULL,"information",""+query.lastError().text());
        return etat;
}


bool DataBase::requeteModifierAdr(QString modAdre)
{
QSqlQuery query;
        if(!query.exec(modAdre))
            return false;
        else
            return true;
}

bool DataBase::requeteSupAdre(QString supp)
{
    QSqlQuery query;
    if(!query.exec(supp))
        return false;
    else
        return true;
}

bool DataBase::requeteCreerFonc(QString CreFon)
{
QSqlQuery query;
bool etat=false;
        if(query.exec(CreFon))
        etat=true;
        else
            QMessageBox::information(NULL,"Information",""+query.lastError().text());
        return etat;
}

bool DataBase::requeteMofiFonc(QString modfon)
{
QSqlQuery query;
        if(!query.exec(modfon))
            return false;
        else
            return true;
}

bool DataBase::requeteSupFonc(QString su)
{
    QSqlQuery query;
    if(!query.exec(su))
        return false;
    else
        return true;
}

bool DataBase::requeteCreerSer(QString CreSer)
{
QSqlQuery query;
bool etat=false;
        if(query.exec(CreSer))
        etat=true;
        else
            QMessageBox::information(NULL,"Information",""+query.lastError().text());
        return etat;
}

bool DataBase::requeteMofiSer(QString modser)
{
QSqlQuery query;
        if(!query.exec(modser))
            return false;
        else
            return true;
}

bool DataBase::requeteSupSer(QString supser)
{
    QSqlQuery query;
    if(!query.exec(supser))
        return false;
    else
        return true;
}

bool DataBase::requeteCreerPro(QString CreerPro)
{
    QSqlQuery query;
    bool etat=false;
            if(query.exec(CreerPro))
            etat=true;
            else
                QMessageBox::information(NULL,"Information",""+query.lastError().text());
            return etat;

}

bool DataBase::requeteActSer(QString Activ)
{
    QSqlQuery query;
            if(!query.exec(Activ))
                return false;
            else
                return true;
}

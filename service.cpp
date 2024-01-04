#include "service.h"
#include"database.h"
#include<QString>
Service::Service(QString c, QString li)
{
    code=c;
    libelle=li;
}

bool Service::CreerSer(Service service)
{
    DataBase dataser;
    QString reqSer="INSERT INTO service (Code, Libelle)VALUES('"+service.getCode()+"','"+service.getLibelle()+"')";
    return dataser.requeteCreerSer(reqSer);
}
bool Service::ModifierSer(Service service)
{
    DataBase datCreeSer;
    QString modiser="update service set code='"+service.getCode()+"',libelle='"+service.getLibelle()+"'";
    return datCreeSer.requeteMofiSer(modiser);
}

bool Service::SupprimerSer(QString code)
{
    DataBase DataSuprSer;
    QString sup="DELETE FROM service WHERE code='"+code+"'";
    return DataSuprSer.requeteSupSer(sup);
}

bool Service::ActivServ(QString cod)
{
    DataBase dat;
    QString Act="update service set code='"+cod+"',etat='Activer'";
    return dat.requeteActSer(Act);
}

bool Service::DesacServ(QString co)
{
    DataBase dat;
    QString desac="update service set code='"+co+"',etat='Desactiver'";
    return dat.requeteActSer(desac);
}

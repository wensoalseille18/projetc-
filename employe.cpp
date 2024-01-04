#include "employe.h"
#include<QString>
#include"database.h"
Employe::Employe(QString nu, QString no, QString pr, QString ma,QString tel, QString sal, QString dat)
{
    numero=nu;
    nom=no;
    prenom=pr;
    mail=ma;
    telephone=tel;
    salaire=sal;
    dateEntre=dat;
}

bool Employe::Creer(Employe employe)
{
DataBase database;
QString reql="INSERT INTO employe(Numero,Nom,Prenom,Mail,Telephone,Salaire,Date_Entrer)VALUES('"+employe.getNumero()+"','"+employe.getNom()+"','"+employe.getPrenom()+"','"+employe.getMail()+"','"+employe.getTelephone()+"','"+employe.getSalaire()+"','"+employe.getDateEntre()+"')";
return database.requeteEnregistrer(reql);
}

bool Employe::Modifier(Employe employe)
{
    DataBase data;
    QString modi="update employe set numero='"+employe.getNumero()+"',nom='"+employe.getNom()+"',prenom='"+employe.getPrenom()+"',mail='"+employe.getMail()+"',telephone='"+employe.getTelephone()+"',salaire='"+employe.getSalaire()+"',date_Entrer='"+employe.getDateEntre()+"' where numero='"+employe.getNumero()+"'";
    return data.requeteModifier(modi);
}

QSqlQuery Employe::Rechercher(QString numero)
{
    DataBase dat;
    QString rech="select* from employe where numero='"+numero+"'";
    return dat.requeteRechercher(rech);
}

bool Employe::Supprimer(QString numero)
{
    DataBase DataSupr;
    QString sup="DELETE FROM employe WHERE numero='"+numero+"'";
    return DataSupr.requeteSupprimer(sup);
}

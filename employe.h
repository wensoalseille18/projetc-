#ifndef EMPLOYE_H
#define EMPLOYE_H
#include <QString>
#include<QSqlQuery>
class Employe
{
public:
    Employe(QString, QString,QString,QString,QString,QString,QString);

    //Les Getters et les Setters

    QString getNumero(){return numero;}
    QString getNom(){return nom;}
    QString getPrenom(){return prenom;}
    QString getMail(){return mail;}
    QString getTelephone(){return telephone;}
    QString getSalaire(){return salaire;}
    QString getDateEntre(){return dateEntre;}

    void setNumero(QString value){numero=value;}
    void setNom(QString value){nom=value;}
    void setPrenom(QString value){prenom=value;}
    void setMail(QString value){mail=value;}
    void setTelephone(QString value){telephone=value;}
    void setSalaire(QString value){salaire=value;}
    void setDateEntre(QString value){dateEntre=value;}

    //les methodes
    static bool Creer(Employe);
    static bool Modifier(Employe);
    static QSqlQuery Rechercher(QString);
    static bool Supprimer(QString);

private:
    QString numero;
    QString nom;
    QString prenom;
    QString mail;
    QString telephone;
    QString salaire;
    QString dateEntre;

};
#endif // EMPLOYE_H

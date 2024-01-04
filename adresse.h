#ifndef ADRESSE_H
#define ADRESSE_H
#include<QString>

class Adresse
{
public:
    Adresse(QString, QString,QString,QString,QString);

    //Les Getters et les Setters
    QString getNoAdresse(){return noAdresse;}
    QString getLigneAdresse(){return ligneAdresse;}
    QString getDepartement(){return departement;}
    QString getCommune(){return commune;}
    QString getTelephone(){return telephone;}

    void setNoAdresse(QString value){noAdresse=value;}
    void setLingeAdreese(QString value){ligneAdresse=value;}
    void setDepartement(QString value){departement=value;}
    void setCommune(QString value){commune=value;}
    void setTelephone(QString value){telephone=value;}

    //Les Methodes
    static bool CreerAdresse(Adresse);
    static bool ModifierAdresse(Adresse);
    static bool SupprimerAdresse(QString);
private:
    QString noAdresse;
    QString ligneAdresse;
    QString departement;
    QString commune;
    QString telephone;
};

#endif // ADRESSE_H

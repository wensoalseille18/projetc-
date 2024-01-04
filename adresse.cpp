#include "adresse.h"
#include<QString>
#include"database.h"

Adresse::Adresse(QString noAd, QString liAd, QString depar, QString com, QString tele )
{
    noAdresse=noAd;
    ligneAdresse=liAd;
    departement=depar;
    commune=com;
    telephone=tele;
}

//La methode CreerAdresse
bool Adresse::CreerAdresse(Adresse adresse)
{
    DataBase database;
    QString adress="INSERT INTO adresse(No_Adresse,Ligne_Adresse,Departement,Commune,Telephone) VALUES ('"+adresse.getNoAdresse()+"','"+adresse.getLigneAdresse()+"','"+adresse.getDepartement()+"','"+adresse.getCommune()+"','"+adresse.getTelephone()+"')";
    return database.requeteCreerAdr(adress);
}

bool Adresse::ModifierAdresse(Adresse adresse)
{
    DataBase data;
    QString modi="update adresse set No_Adresse='"+adresse.getNoAdresse()+"',Ligne_Adresse='"+adresse.getLigneAdresse()+"',Departement='"+adresse.getDepartement()+"',Commune='"+adresse.getCommune()+"',Telephone='"+adresse.getTelephone()+"'";
    return data.requeteModifierAdr(modi);
}

bool Adresse::SupprimerAdresse(QString noAdresse)
{
        DataBase DataSupr;
        QString supp="DELETE FROM adresse WHERE No_Adresse='"+noAdresse+"'";
        return DataSupr.requeteSupAdre(supp);
}
//,Ligne_Adresse='"+ligneAdresse+"',Departement='"+departement+"',Commune='"+commune+"',Telephone='"+telephone+"'"

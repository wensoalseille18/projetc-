#ifndef FONCTION_H
#define FONCTION_H
#include<QString>

class Fonction
{
public:
    Fonction(QString, QString);

    QString getCode(){return code;}
    QString getLibelle(){return libelle;}

    void setCode(QString value){code=value;}
    void setlibelle(QString value){libelle=value;}


    //les methodes    
    static bool CreerFonc(Fonction);
    static bool ModifierFonc(Fonction);
    static bool SuppriFonc(QString);


private:
    QString code;
    QString libelle;
};

#endif // FONCTION_H

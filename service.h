#ifndef SERVICE_H
#define SERVICE_H
#include<QString>

class Service
{
public:
    Service(QString, QString);

    QString getCode(){return code;}
    QString getLibelle(){return libelle;}
    //QString getEtat(){return etat;}

    void setCode(QString value){code=value;}
    void setLibelle(QString value){libelle=value;}
    //void setEtat(QString value){etat=value;}

    static bool CreerSer(Service);
    static bool ModifierSer(Service);
    static bool SupprimerSer(QString);
    static bool ActivServ(QString);
    static bool DesacServ(QString);

private:
    QString code;
    QString libelle;
    //QString etat;
};

#endif // SERVICE_H

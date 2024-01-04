#ifndef PROJET_H
#define PROJET_H
#include<QString>

class Projet
{
public:
    Projet(QString, QString, QString);

    QString getCodeProjet(){return codeProjet;}
    QString getDuree(){return duree;}
    QString getCoutEstime(){return coutEstime;}
    //QString getEtatActuel(){return etatActuel;}

    void setCodeProjet(QString value){codeProjet=value;}
    void setDuree(QString value){duree=value;}
    void setCoutEstime(QString value){coutEstime=value;}
    //void setEtatActuel(QString value){etatActuel=value;}

    static bool CreerPro(Projet);
    static bool Demarre(QString);
    static bool Pauser(QString);
    static bool Finalise(QString);

private:
    QString codeProjet;
    QString duree;
    QString coutEstime;
    //QString etatActuel;
};

#endif // PROJET_H

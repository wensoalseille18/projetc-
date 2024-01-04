#ifndef AFFECTATION_H
#define AFFECTATION_H
#include<QString>

class Affectation
{
public:
    Affectation(QString, QString, QString);

    QString getNumeroEmp(){return numeroEmp;}
     QString getCodeProjet(){return codeProjet;}
    QString getDateAffectation(){return dateAffectation;}

    void setNumeroEmp(QString value){numeroEmp=value;}
    void setCodeProjet(QString value){codeProjet=value;}
    void setDateAffectation(QString value){dateAffectation=value;}

static bool Affecter(Affectation);
static bool Desaffecter(QString);

private:
    QString numeroEmp;
    QString codeProjet;
    QString dateAffectation;
};

#endif // AFFECTATION_H

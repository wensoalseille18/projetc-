#ifndef DATABASE_H
#define DATABASE_H
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlError>
#include<QMessageBox>

class DataBase
{
public:
    DataBase();
    bool requeteEnregistrer(QString);
    QSqlQuery requeteRechercher(QString);
    bool requeteModifier(QString);
    bool requeteSupprimer(QString);

    bool requeteCreerAdr(QString);
    bool requeteModifierAdr(QString);
    bool requeteSupAdre(QString);

    bool requeteCreerFonc(QString);
    bool requeteMofiFonc(QString);
    bool requeteSupFonc(QString);

    bool requeteCreerSer(QString);
    bool requeteMofiSer(QString);
    bool requeteSupSer(QString);
    bool requeteActSer(QString);

    bool requeteCreerPro(QString);

};

#endif // DATABASE_H

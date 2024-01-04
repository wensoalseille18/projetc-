#ifndef FORM_NEW_EMPLOYE_H
#define FORM_NEW_EMPLOYE_H
#include<QFormLayout>
#include<QPushButton>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QLineEdit>
#include<QLabel>
#include <QWidget>

class Form_New_Employe : public QWidget
{
    Q_OBJECT
public:
    explicit Form_New_Employe(QWidget *parent = NULL);

private:
//    QFormLayout *formulaire;
    QHBoxLayout *layoutbouton;
    QVBoxLayout *layoutprincipale;

    QLabel *lnumero;
    QLabel *lnom;
    QLabel *lprenom;
    QLabel *lmail;
    QLabel *ltelephone;
    QLabel *lsalaire;
    QLabel *ldateEntre;

    QLineEdit *tnumero;
    QLineEdit *tnom;
    QLineEdit *tprenom;
    QLineEdit *tmail;
    QLineEdit *ttelephone;
    QLineEdit *tsalaire;
    QLineEdit *tdateEntre;


    QPushButton *bsave;
    QPushButton *bcancel;

     QGridLayout *gridform;

signals:

public slots:
void SaveInfos();
void ClearText();
};

#endif // FORM_NEW_EMPLOYE_H

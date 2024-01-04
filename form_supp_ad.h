#ifndef FORM_SUPP_AD_H
#define FORM_SUPP_AD_H
#include<QFormLayout>
#include<QPushButton>
#include<QGridLayout>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QLineEdit>
#include<QLabel>
#include <QWidget>

class Form_Supp_Ad : public QWidget
{
    Q_OBJECT
public:
    explicit Form_Supp_Ad(QWidget *parent = NULL);

private:
    QLabel *lno_Adresse;
    QLabel *lline_Adresse;
    QLabel *ldepartement;
    QLabel *lcommune;
    QLabel *ltelephone;


    QLineEdit *tno_Adresse;
    QLineEdit *tline_Adresse;
    QLineEdit *tdepartement;
    QLineEdit *tcommune;
    QLineEdit *ttelephone;


    QPushButton *bsupprimer;
    QPushButton *bcancel;


    QGridLayout *gridform;



signals:

public slots:
    void Suppri();
    void Annul();
};

#endif // FORM_SUPP_AD_H

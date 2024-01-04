#ifndef FORM_MODI_AD_H
#define FORM_MODI_AD_H
#include<QFormLayout>
#include<QPushButton>
#include<QGridLayout>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QLineEdit>
#include<QLabel>
#include <QWidget>

class Form_Modi_Ad : public QWidget
{
    Q_OBJECT
public:
    explicit Form_Modi_Ad(QWidget *parent = NULL);

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


    QPushButton *bmodifier;
    QPushButton *bcancel;


    QGridLayout *gridform;


signals:

public slots:
    void Modif();
    void ClearModif();
};

#endif // FORM_MODI_AD_H

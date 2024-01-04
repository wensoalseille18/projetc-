#ifndef FORM_CREER_ADR_H
#define FORM_CREER_ADR_H
#include<QFormLayout>
#include<QPushButton>
#include<QGridLayout>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QLineEdit>
#include<QLabel>
#include <QWidget>

class Form_Creer_Adr : public QWidget
{
    Q_OBJECT
public:
    explicit Form_Creer_Adr(QWidget *parent = NULL);
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


    QPushButton *bsave;
    QPushButton *bcancel;

    QGridLayout *gridform;

signals:


public slots:
    void Newadr();
    void ClearAdr();
};

#endif // FORM_CREER_ADR_H

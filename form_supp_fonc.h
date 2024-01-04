#ifndef FORM_SUPP_FONC_H
#define FORM_SUPP_FONC_H
#include<QFormLayout>
#include<QPushButton>
#include<QGridLayout>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QLineEdit>
#include<QLabel>
#include <QWidget>

class Form_Supp_Fonc : public QWidget
{
    Q_OBJECT
public:
    explicit Form_Supp_Fonc(QWidget *parent = NULL);
private:
    QLabel *lcode;

    QLineEdit *tcode;

    QPushButton *bsupprimer;
    QPushButton *bcancel;

    QGridLayout *gridform;

signals:

public slots:
    void SuppFonc();
    void Can();
};

#endif // FORM_SUPP_FONC_H

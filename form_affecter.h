#ifndef FORM_AFFECTER_H
#define FORM_AFFECTER_H
#include<QFormLayout>
#include<QPushButton>
#include<QGridLayout>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QLineEdit>
#include<QLabel>
#include <QWidget>

class Form_Affecter : public QWidget
{
    Q_OBJECT
public:
    explicit Form_Affecter(QWidget *parent = NULL);
private:
    QLabel * lno_employe;
    QLabel * lcode_projet;
    QLabel * ldate_affectation;

    QLineEdit * tno_employe;
    QLineEdit * tcode_projet;
    QLineEdit * tdate_affectation;

    QPushButton * baffecter;
    QPushButton * bdesaffecter;


    QGridLayout *gridform;

signals:

public slots:
    void Affecter();
    void Desaffecter();
};

#endif // FORM_AFFECTER_H

#ifndef FORM_CODE_FONC_H
#define FORM_CODE_FONC_H
#include<QFormLayout>
#include<QPushButton>
#include<QGridLayout>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QLineEdit>
#include<QLabel>
#include <QWidget>
#include <QWidget>

class Form_Code_Fonc : public QWidget
{
    Q_OBJECT
public:
    explicit Form_Code_Fonc(QWidget *parent = NULL);

private:
    QLabel *lcode;
    QLabel *llibelle;

    QLineEdit *tcode;
    QLineEdit *tlibelle;


    QPushButton *bcreer;
    QPushButton *bcancel;

    QGridLayout *gridform;
signals:

public slots:
    void CrerFonc();
    void ClearFonc();

};

#endif // FORM_CODE_FONC_H

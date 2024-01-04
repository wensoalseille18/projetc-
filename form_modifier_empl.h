#ifndef FORM_MODIFIER_EMPL_H
#define FORM_MODIFIER_EMPL_H
#include<QFormLayout>
#include<QPushButton>
#include<QGridLayout>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QLineEdit>
#include<QLabel>
#include <QWidget>

class Form_Modifier_Empl : public QWidget
{
    Q_OBJECT
public:
    explicit Form_Modifier_Empl(QWidget *parent = NULL);

private:
    QLabel *lnumero;
    QLabel *lnom;
    QLabel *lprenom;
    QLabel *lmail;
    QLabel *lsalaire;
    QLabel *ltelephone;
    QLabel *ldateEntre;

    QLineEdit *tnumero;
    QLineEdit *tnom;
    QLineEdit *tprenom;
    QLineEdit *tmail;
    QLineEdit *tsalaire;
    QLineEdit *ttelephone;
    QLineEdit *tdateEntre;

    QPushButton *brechercher;
    QPushButton *bmodifier;
    QPushButton *bcancel;

    QGridLayout *gridform;

signals:

public slots:
    void Rechercher();
    void Modifier();
    void ClearText();
};

#endif // FORM_MODIFIER_EMPL_H

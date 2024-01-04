#ifndef FORM_SUPPRIMER_EMPL_H
#define FORM_SUPPRIMER_EMPL_H
#include<QFormLayout>
#include<QPushButton>
#include<QGridLayout>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QLineEdit>
#include<QLabel>
#include <QWidget>

class Form_Supprimer_Empl : public QWidget
{
    Q_OBJECT
public:
    explicit Form_Supprimer_Empl(QWidget *parent = NULL);

private:
    QLabel *lnumero;
    QLineEdit *tnumero;

    QPushButton *bsupprimer;
    QPushButton *bcancel;

    QGridLayout *gridform;
signals:

public slots:
    void Supprimer();
};

#endif // FORM_SUPPRIMER_EMPL_H

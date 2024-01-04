#ifndef FORM_AFF_FONC_H
#define FORM_AFF_FONC_H

#include<QComboBox>
#include<QTableView>
#include<QGridLayout>
#include<QVBoxLayout>
#include<QLineEdit>
#include <QWidget>
#include<QLabel>
#include<QPushButton>

class Form_Aff_Fonc : public QWidget
{
    Q_OBJECT
public:
    explicit Form_Aff_Fonc(QWidget *parent =NULL);

signals:

public slots:
     void Affichage();
private:
    QLabel *lcritere;
    QComboBox *combocritere;
    QLineEdit *champ;
    QPushButton *brechercher;
    QTableView *tableaffichage;
    QGridLayout *layoutcritere;
    QVBoxLayout *layoutprincipal;
};

#endif // FORM_AFF_FONC_H

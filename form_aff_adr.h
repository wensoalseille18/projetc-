#ifndef FORM_AFF_ADR_H
#define FORM_AFF_ADR_H

#include<QLabel>
#include<QPushButton>
#include<QComboBox>
#include<QTableView>
#include<QGridLayout>
#include<QVBoxLayout>
#include<QLineEdit>
#include <QWidget>
class Form_Aff_Adr : public QWidget
{
    Q_OBJECT
public:
    explicit Form_Aff_Adr(QWidget *parent = NULL);

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

#endif // FORM_AFF_ADR_H

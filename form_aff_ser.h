#ifndef FORM_AFF_SER_H
#define FORM_AFF_SER_H

#include<QLabel>
#include<QPushButton>
#include<QComboBox>
#include<QTableView>
#include<QGridLayout>
#include<QVBoxLayout>
#include<QLineEdit>
#include <QWidget>


class Form_Aff_Ser : public QWidget
{
    Q_OBJECT
public:
    explicit Form_Aff_Ser(QWidget *parent = NULL);

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

#endif // FORM_AFF_SER_H

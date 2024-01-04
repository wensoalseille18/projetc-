#ifndef FORM_AFF_AF_H
#define FORM_AFF_AF_H
#include<QComboBox>
#include<QTableView>
#include<QGridLayout>
#include<QVBoxLayout>
#include<QLabel>
#include<QPushButton>
#include<QLineEdit>
#include <QWidget>

class Form_Aff_Af : public QWidget
{
    Q_OBJECT
public:
    explicit Form_Aff_Af(QWidget *parent = NULL);
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

#endif // FORM_AFF_AF_H

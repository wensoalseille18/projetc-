#ifndef FORM_AFFI_EMPL_H
#define FORM_AFFI_EMPL_H
#include<QLabel>
#include<QPushButton>
#include<QComboBox>
#include<QTableView>
#include<QGridLayout>
#include<QVBoxLayout>
#include<QLineEdit>
#include <QWidget>

class Form_Affi_Empl : public QWidget
{
    Q_OBJECT
public:
    explicit Form_Affi_Empl(QWidget *parent = NULL);

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

#endif // FORM_AFFI_EMPL_H

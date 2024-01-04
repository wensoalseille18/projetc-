#ifndef FORM_SUPP_SERVICE_H
#define FORM_SUPP_SERVICE_H
#include<QFormLayout>
#include<QPushButton>
#include<QGridLayout>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QLineEdit>
#include<QLabel>
#include <QWidget>

class Form_Supp_Service : public QWidget
{
    Q_OBJECT
public:
    explicit Form_Supp_Service(QWidget *parent = NULL);
private:
    QLabel *lcode;

    QLineEdit *tcode;

    QPushButton *bsupprimer;
    QPushButton *bcancel;

    QGridLayout *gridform;

signals:

public slots:
    void SuppSer();
    void CanSer();
};

#endif // FORM_SUPP_SERVICE_H

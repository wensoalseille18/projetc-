#ifndef FORM_AD_SERVICE_H
#define FORM_AD_SERVICE_H
#include<QFormLayout>
#include<QPushButton>
#include<QGridLayout>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QLineEdit>
#include<QLabel>
#include <QWidget>

class Form_AD_Service : public QWidget
{
    Q_OBJECT
public:
    explicit Form_AD_Service(QWidget *parent = NULL);
private:
    QLabel *lcode;

    QLineEdit *tcode;

    QPushButton *bactiv;
    QPushButton *bdesac;

    QGridLayout *gridform;
signals:

public slots:
    void ActiSer();
    void DesacSer();

};

#endif // FORM_AD_SERVICE_H

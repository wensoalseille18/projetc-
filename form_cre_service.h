#ifndef FORM_CRE_SERVICE_H
#define FORM_CRE_SERVICE_H
#include<QFormLayout>
#include<QPushButton>
#include<QGridLayout>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QLineEdit>
#include<QLabel>
#include <QWidget>

class Form_Cre_Service : public QWidget
{
    Q_OBJECT
public:
    explicit Form_Cre_Service(QWidget *parent = NULL);
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
    void CrerSer();
    void ClearSer();

};

#endif // FORM_CRE_SERVICE_H

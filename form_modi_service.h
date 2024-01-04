#ifndef FORM_MODI_SERVICE_H
#define FORM_MODI_SERVICE_H
#include<QFormLayout>
#include<QPushButton>
#include<QGridLayout>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QLineEdit>
#include<QLabel>
#include <QWidget>

class Form_Modi_Service : public QWidget
{
    Q_OBJECT
public:
    explicit Form_Modi_Service(QWidget *parent = NULL);

private:
    QLabel *lcode;
    QLabel *llibelle;

    QLineEdit *tcode;
    QLineEdit *tlibelle;

    QPushButton *bmodifer;
    QPushButton *bcancel;

    QGridLayout *gridform;

signals:

public slots:
    void ModiSer();
    void CleanSer();
};
#endif // FORM_MODI_SERVICE_H

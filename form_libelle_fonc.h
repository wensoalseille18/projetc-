#ifndef FORM_LIBELLE_FONC_H
#define FORM_LIBELLE_FONC_H
#include<QFormLayout>
#include<QPushButton>
#include<QGridLayout>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QLineEdit>
#include<QLabel>
#include <QWidget>

class Form_Libelle_Fonc : public QWidget
{
    Q_OBJECT
public:
    explicit Form_Libelle_Fonc(QWidget *parent = NULL);
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
    void Modi();
    void Clean();
};

#endif // FORM_LIBELLE_FONC_H

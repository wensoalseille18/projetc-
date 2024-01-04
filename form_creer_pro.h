#ifndef FORM_CREER_PRO_H
#define FORM_CREER_PRO_H
#include<QFormLayout>
#include<QPushButton>
#include<QGridLayout>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QLineEdit>
#include<QLabel>

#include <QWidget>

class Form_Creer_Pro : public QWidget
{
    Q_OBJECT
public:
    explicit Form_Creer_Pro(QWidget *parent = NULL);
private:
    QLabel * lcode_projet;
    QLabel * lduree;
    QLabel * lcout_Estime;
    QLabel * letatActuel;

    QLineEdit *tcode_projet;
    QLineEdit *tdure;
    QLineEdit *tcout_Estime;
    QLineEdit *tetatActuel;

    QPushButton *bsave;
    QPushButton *bcancel;

    QGridLayout *gridform;

signals:

public slots:
    void SaveInfo();
    void DelInfo();
};

#endif // FORM_CREER_PRO_H

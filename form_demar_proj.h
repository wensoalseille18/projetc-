#ifndef FORM_DEMAR_PROJ_H
#define FORM_DEMAR_PROJ_H
#include<QFormLayout>
#include<QPushButton>
#include<QGridLayout>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QLineEdit>
#include<QLabel>
#include <QWidget>

class Form_Demar_Proj : public QWidget
{
    Q_OBJECT
public:
    explicit Form_Demar_Proj(QWidget *parent = NULL);
private:
        QLabel * lcode_projet;

        QLineEdit * tcode_projet;

        QPushButton *bdema;
        QPushButton *bpause;
        QPushButton *bfini;

        QGridLayout *gridform;
signals:

public slots:
        void Demar();
        void Pause();
        void Fini();
};

#endif // FORM_DEMAR_PROJ_H

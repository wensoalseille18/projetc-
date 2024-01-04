#ifndef FORM_DEMAR_PRO_H
#define FORM_DEMAR_PRO_H
#include"QPushButton"
#include<QLabel>
#include<QLineEdit>
#include<QGridLayout>
#include <QWidget>

class Form_Demar_Pro : public QWidget
{
    Q_OBJECT
public:
    explicit Form_Demar_Pro(QWidget *parent = NULL);

private:
    QLabel *lcode_Pro;

    QLineEdit *tcode_Pro;

    QPushButton *bdemar;
//    QPushButton *bpause;
//    QPushButton *bfini;

    QGridLayout * gridform;
signals:

public slots:
    void Demar();
//    void Pause();
//   void Fini();
};

#endif // FORM_DEMAR_PRO_H

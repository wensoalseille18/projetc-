#-------------------------------------------------
#
# Project created by QtCreator 2022-05-07T13:36:59
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Projet_Final_cpp
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    employe.cpp \
    fonction.cpp \
    adresse.cpp \
    projet.cpp \
    service.cpp \
    affectation.cpp \
    form_creer_adr.cpp \
    form_supp_ad.cpp \
    form_modi_ad.cpp \
    form_code_fonc.cpp \
    form_libelle_fonc.cpp \
    form_supp_fonc.cpp \
    form_creer_pro.cpp \
    form_affecter.cpp \
    form_desaffecter.cpp \
    form_new_employe.cpp \
    form_modifier_empl.cpp \
    form_supprimer_empl.cpp \
    form_cre_service.cpp \
    form_modi_service.cpp \
    form_supp_service.cpp \
    form_ad_service.cpp \
    database.cpp \
    form_affi_empl.cpp \
    form_aff_ser.cpp \
    form_aff_adr.cpp \
    form_aff_fonc.cpp \
    form_aff_pro.cpp \
    form_aff_af.cpp \
    form_demar_proj.cpp

HEADERS += \
        mainwindow.h \
    employe.h \
    fonction.h \
    adresse.h \
    projet.h \
    service.h \
    affectation.h \
    form_creer_adr.h \
    form_supp_ad.h \
    form_modi_ad.h \
    form_code_fonc.h \
    form_libelle_fonc.h \
    form_supp_fonc.h \
    form_creer_pro.h \
    form_affecter.h \
    form_desaffecter.h \
    form_new_employe.h \
    form_modifier_empl.h \
    form_supprimer_empl.h \
    form_cre_service.h \
    form_modi_service.h \
    form_supp_service.h \
    form_ad_service.h \
    database.h \
    form_affi_empl.h \
    form_aff_ser.h \
    form_aff_adr.h \
    form_aff_fonc.h \
    form_aff_pro.h \
    form_aff_af.h \
    form_demar_proj.h

FORMS += \
        mainwindow.ui

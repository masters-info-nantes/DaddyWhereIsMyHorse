#-------------------------------------------------
#
# Project created by QtCreator 2015-02-09T14:09:16
#
#-------------------------------------------------

QT       += core gui widgets multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled3
TEMPLATE = app


SOURCES += main.cpp\
    accueil.cpp \
    projet.cpp \
    imageclickable.cpp \
    dessin.cpp \
    creationprojet.cpp \
    player.cpp \
    playercontrols.cpp \
    preferences.cpp \
    erreur.cpp

HEADERS  += \
    accueil.h \
    projet.h \
    imageclickable.h \
    dessin.h \
    creationprojet.h \
    player.h \
    playercontrols.h \
    preferences.h \
    erreur.h

FORMS    +=

DISTFILES += \
    img/film.png

RESOURCES += \
    ressources.qrc

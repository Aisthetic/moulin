TEMPLATE = app
TARGET = moulin

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
SOURCES += \
    main.cpp \
    game.cpp \
    button.cpp \
    board.cpp

HEADERS += \
    game.h \
    button.h \
    board.h

RESOURCES += \
    ressources.qrc

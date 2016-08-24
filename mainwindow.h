#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QApplication>
#include <QMainWindow>
#include <QLocale>
#include "configloader.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public slots:
    void localeChanged(const QLocale& locale);
    void monthChanged(int year, int month);

private slots:
    void preferencesTriggered();

public:
    explicit MainWindow(QApplication* app, ConfigLoader* config, QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QApplication* m_app;
    QTranslator* m_appTranslator;
    QTranslator* m_qtTranslator;

    ConfigLoader* m_config;

    static QString getLongMonthName(int);
};

#endif // MAINWINDOW_H

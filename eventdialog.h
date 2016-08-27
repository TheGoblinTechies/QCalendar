#ifndef EVENTDIALOG_H
#define EVENTDIALOG_H

#include <QDialog>
#include <QDate>
#include <QTime>
#include <QString>
#include <QList>
#include "calendarevent.h"

namespace Ui {
class EventDialog;
}

class EventDialog : public QDialog
{
    Q_OBJECT

public:
    enum RepeatMode {
        NONE,
        ONCE,
        DAILY,
        WEEKLY,
        MONTHLY,
        YEARLY,
        CUSTOM_EVEN,    // with equal intervals between adjacent events
        CUSTOM_UNEVEN    // with inequal intervals between adjacent events
    };

    explicit EventDialog(QWidget *parent = 0);
    EventDialog(const QDate& date, QWidget *parent = 0);
    EventDialog(const CalendarEvent& event, QWidget *parent = 0);
    ~EventDialog();

public slots:
    void repeatModeChanged();

private:
    Ui::EventDialog *ui;
    static RepeatMode getRepeatMode(const QList<QDate>&);
};

#endif // EVENTDIALOG_H

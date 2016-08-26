#ifndef DATAADAPTER_H
#define DATAADAPTER_H

#include "calendarevent.h"
#include <QList>
#include <QJsonObject>
#include <QHash>
#include <QMap>

class DataAdapter
{
public:
    enum ItemType {
        EVENT,
        FILE
    };
    static constexpr char KEY_ITEMS[] = "items";
    static constexpr char KEY_DATES[] = "dates";

    DataAdapter();
    DataAdapter(const QJsonObject&);
    const CalendarEvent* getEvent(const QString& sha1) const;
    void addOrUpdateEvent(const QString& sha1, CalendarEvent* event);
    void deleteSingleEvent(const QString& sha1, const QDate& date);
    void deleteSeries(const QString& sha1);
    QList<QStringList> getEventsForMonth(int year, int month) const;
    QJsonObject toJson() const;
    ~DataAdapter();

private:
    static constexpr char KEY_ITEM_TYPE[] = "type";
    static constexpr char KEY_ITEM_COLOR[] = "color";
    static constexpr char KEY_ITEM_DATES[] = "dates";
    static constexpr char KEY_ITEM_START_TIME[] = "startTime";
    static constexpr char KEY_ITEM_END_TIME[] = "endTime";
    static constexpr char KEY_ITEM_TITLE[] = "title";
    static constexpr char KEY_ITEM_LOC[] = "location";
    static constexpr char KEY_ITEM_COMMENT[] = "comments";
    static constexpr char KEY_DATE_DATE[] = "date";
    static constexpr char KEY_DATE_ITEMS[] = "items";

    static constexpr char DATE_FORMAT[] = "yyyy-MM-dd";
    static constexpr char TIME_FORMAT[] = "hh:mm";

    QHash<QString, CalendarEvent*> m_events;
    QMap<QDate, QStringList> m_dates;

};

#endif // DATAADAPTER_H

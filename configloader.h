#ifndef CONFIGLOADER_H
#define CONFIGLOADER_H

#include <QObject>
#include <QFile>
#include "preferencemanager.h"

class ConfigLoader : public QObject
{
    Q_OBJECT
public:
    explicit ConfigLoader(QObject *parent = 0);
    PreferenceManager* pref() {
        return m_pref;
    }
    ~ConfigLoader();

public slots:
    void configChanged();

private:
    PreferenceManager* m_pref;
    QFile* m_jsonFile;
};

#endif // CONFIGLOADER_H

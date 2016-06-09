﻿#ifndef __JsonFormat_h__
#define __JsonFormat_h__

// Qt lib import
#include <QObject>

#define JSONFORMAT_INITIALIZA                                                       \
{                                                                                   \
    qmlRegisterType<JsonFormat::Manage>("JsonFormat", 1, 0, "JsonFormatManage");    \
}

namespace JsonFormat
{

class Manage: public QObject
{
    Q_OBJECT
    Q_DISABLE_COPY(Manage)

public:
    Manage() = default;

    ~Manage() = default;

public slots:
    bool check(const QString &string);

    QString format(const QString &string, const bool &compact);

    QString clipboardText();

    void setClipboardText(const QString &string);
};

}

#endif//__JsonFormat_h__
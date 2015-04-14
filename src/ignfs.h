//ibnu.yahya@toroo.org
#ifndef IGNFS_H
#define IGNFS_H

#include <QObject>
#include <QSize>
#include <QtWidgets/QApplication>
#include <QDir>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <QTreeView>
#include <QDirIterator>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonParseError>
#include <QDateTime>
#include "ignjson.h"

class ignfs : public QObject
{
    Q_OBJECT

public:
    ignfs(QObject *parent = 0);
    ignjson *json;

signals:

public slots:
    bool fileRemove(const QString& path);
    QString appPath();
    QString homePath();
    bool fileWrite(const QString& path, const QString& data);
    QString fileRead(const QString& path);
    bool dir(const QString& opt,const QString& path);
    //checking file or directory
    bool isExist(const QString &path);
    bool isDirectory(const QString &path);
    bool isFile(const QString &path);
    bool isAbsolute(const QString &path);
    bool isExecutable(const QString &path);
    bool isReadable(const QString &path);
    bool isWritable(const QString &path);
    bool isSymlink(const QString &path);
    bool copy(const QString &src, const QString &des);
    QString openFileDialog();
    QString openDirDialog();
    QString saveFileDialog();
    QString saveFileDialog(const QVariant &config);
    QStringList list(const QString &path);
    QVariant info(const QString &path);
};

#endif // IGNFS_H

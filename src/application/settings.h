/* ============================================================
* QuiteRSS is a open-source cross-platform RSS/Atom news feeds reader
* Copyright (C) 2011-2017 QuiteRSS Team <quiterssteam@gmail.com>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <https://www.gnu.org/licenses/>.
* ============================================================ */
#ifndef SETTINGS_H
#define SETTINGS_H

#include <QSettings>
#include <QVariant>

class Settings
{
public:
  explicit Settings();
  ~Settings();

  static void createSettings(const QString &fileName = QString());
  static QSettings* getSettings();
  static void syncSettings();
  QString fileName();

  void beginGroup(const QString &prefix);
  void endGroup();

  void setValue(const QString &key, const QVariant &defaultValue = QVariant());
  QVariant value(const QString &key, const QVariant &defaultValue = QVariant());
  bool contains(const QString &key);

private:
  static QSettings* settings_;

};

#endif // SETTINGS_H

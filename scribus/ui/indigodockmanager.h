/*******************************************************
 *
 * Copyright (C) 2016  Martin Reininger
 *
 * This file is part of IndigoDock.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *
 *******************************************************/


#ifndef INDIGODOCKMANAGER_H
#define INDIGODOCKMANAGER_H

#include <QWidget>
#include <QMainWindow>
#include <QList>
#include <QString>
#include <QByteArray>
#include <QSize>
#include <QHash>
#include "indigodock.h"

class PrefsContext;

class IndigoDockManager: public QWidget
{
	Q_OBJECT
public:
	IndigoDockManager(QMainWindow *parent = 0);

	void addIndigoDock(IndigoDock *dock, Qt::DockWidgetArea area = Qt::LeftDockWidgetArea);
	void addIndigoPanel(IndigoPanel * panel, IndigoPanel::IndigoDockState dockState = IndigoPanel::Docked, bool isNewPanel = true, int tabIndex = -1);
	void addIndigoPanel(IndigoDock * dock, IndigoPanel * panel, IndigoPanel::IndigoDockState dockState = IndigoPanel::Docked, bool isNewPanel = true, int tabIndex = -1);
	void scrollToPanel(QString name);
	void removePanel(IndigoPanel * panel);

	QList<IndigoDock*> indigoDocks() const;

	void saveWorkspace();
	void loadWorkspace();

	/* Settings */
	void setMinimumPanelHeight(int height);
	void setMinimumPanelWidth(int width);
	void setMinimumPanelSize(QSize size);
	QSize minimumPanelSize();

private:
	QList<IndigoDock*> lst_Docks;
	QList<IndigoDock*> lst_removeDocks;
	void connectPanel(IndigoPanel *panel);
	void removeDock(IndigoDock *dock);
	void removeAllDocks(QList<IndigoDock *> &lst_outDocks, QHash<QString, IndigoPanel *> &lst_outPanels);

	int int_minimumPanelHeight;
	int int_minimumPanelWidth;
	int int_fadeSpeed;

protected:
	virtual void setPrefsContext(QString context);
	PrefsContext* palettePrefs;
	QString prefsContextName;


signals:

public slots:
	void hoverDock();
	void dropPanel();
	void dragoutPanel();
	void showTab(int);
	void hideTab(int);
	void scrollToPanel();
	void updateDockSize();

};

#endif // INDIGODOCKMANAGER_H

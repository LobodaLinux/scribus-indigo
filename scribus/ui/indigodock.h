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


#ifndef INDIGODOCK_H
#define INDIGODOCK_H

#include <QWidget>
#include <QVBoxLayout>
#include <QSplitter>
#include <QtGui>
#include <QList>
#include <QDockWidget>
#include <QScrollArea>
#include <QPropertyAnimation>
#include <QScrollBar>

#include "indigopanel.h"
#include "indigotabbar.h"


/*#####################
 #
 #
 # IndigoDock
 #
 #
 #####################*/


class IndigoDock : public QDockWidget
{
	Q_OBJECT

public:

	IndigoDock(QWidget *parent = 0);

	void addIndigoPanel(IndigoPanel *panel, IndigoPanel::IndigoDockState dockState = IndigoPanel::Docked, int tabIndex = -1);
	bool hoverDock(IndigoPanel *pan);
	bool dropPanel(IndigoPanel *pan);
	void removePanel(int index);
	QList<IndigoPanel*>getPanels();
	void clear();
	Qt::Orientation Orientation();
	void hideTab(int index);
	void showTab(int index);
	void panelRemoved(int index);
	void panelAdded(QIcon icon,int index, QString);

	// properties
	void setPanelPadding(int padding);
	int panelPadding();
	void setMinimumPanelHeight(int height);
	void setMinimumPanelWidth(int width);
	void setMinimumPanelSize(QSize size);
	QSize minimumPanelSize();
	void setMovableTabs(bool allow);
	void setRestoreMode(bool restoreOn);
	bool movableTabs();
	void updateMinHeight();

	QScrollArea * wdg_scrollArea_dz;

private:

	QList<IndigoPanel*> lst_PanelList;
	QBoxLayout * lyt_dropzone;
	IndigoTabBar * wdg_toolbar;
	QSplitter *wdg_mainSplitter;

	QScrollArea * wdg_scrollArea_tb;
	QWidget *wdg_dropzone;
	QWidget * wdg_placeholder;
	Qt::Orientation m_orientation;

	int int_padding;
	int int_placeholderHeight;
	int int_minHeight;
	int int_minWidth;
	int int_minPanelWidth;
	int int_minPanelHeight;
	int int_scrollSpeed;

	bool bool_singleMode;
	bool bool_restoreMode;

	void addWidget(QWidget *widget);
	void insertWidget(int index, QWidget *widget);
	void addPlaceholder (int index = -1);
	void removePlaceholder ();
	void calculateSize();
	void updatePanels();
	void updatePanelSize();

protected:
	void resizeEvent(QResizeEvent *e);
	bool eventFilter(QObject *object, QEvent *event);

signals:

	void panelDropped(int index);
	void singleMode(bool);

public slots:

	void scrollToPanel(int PanelIndex);
	void scrollToPanel(QString PanelName);
	void movePanel(int oldIndex, int newIndex);



private slots:
	void updateTabPosition(Qt::DockWidgetArea area);
	void toggelPanelVisibility(bool visibility);


};

#endif // INDIGODOCK_H

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


#ifndef INDIGOTABBAR_H
#define INDIGOTABBAR_H

//#include <QtWidgets>
#include <QWidget>
#include <QIcon>
#include <QList>
#include <QEvent>
#include <QMouseEvent>
#include <QPainter>

//
// IndigoTab
//


class IndigoTab : public QWidget
{
	Q_OBJECT
public:

	enum Display{
		Visible,
		Hidden
	};

	// unused
	enum ActiveState{
		Enabled,
		Disabeld
	};

	IndigoTab(QIcon icon, QWidget* parent = 0);
	void setIcon(QIcon icon);
	QIcon Icon();
	void setDisplayState(Display display);
	Display displayState();

private:
	QIcon ico_icon;
	Display m_display;

};


//
// IndigoTabBar
//


class IndigoTabBar : public QWidget
{
	Q_OBJECT
public:

	IndigoTabBar(QWidget* parent = 0);

	QList<IndigoTab*> lst_TabList;

	int currentIndex();
	Qt::Orientation TabOrientation();
	void setTabOrientation(Qt::Orientation tabDirection);
	void setTabSize(int side);
	void setTabSize(int width, int height);
	bool movableTabs();
	void setMovableTabs(bool allowMoving);

	void clear();


protected:
	void paintEvent(QPaintEvent *event);
	void mousePressEvent(QMouseEvent*event);
	void mouseReleaseEvent(QMouseEvent*event);
	void mouseMoveEvent(QMouseEvent*event);
	void leaveEvent(QEvent *event);


private:
	int int_tabWidth;
	int int_tabHeight;
	int int_gap;
	int int_borderHighlight;
	int int_hoverIndex;
	int int_oldIndex;
	int int_newIndex;
	bool bool_dragStart;
	bool bool_dragProceed;
	bool bool_hover;
	bool bool_allowDrag;
	bool bool_enableTooltip;
	QPoint pnt_dragPosition;
	QPoint pnt_mouseDown;
	int int_dragTolerance;
	int int_realIndex;
	int int_dragIndex;
	int int_minDimension;

	Qt::Orientation m_tabOrientation;
	QColor col_colorHighlightAlpha;
	QColor blendColor(QColor color1, QColor color2, double ratio);

	int realTabIndex(int mouseAxis);
	int fakeTabIndex(int mouseAxis);
	int countVisibleTabs();
	int countHiddenTabs();

	int limitTabRange(int TabIndex);

	void moveTab();
	void calculateSize();
	void leaveTabBar();



signals:
	void tabMoved(int,int);
	void tabClicked(int);

public slots:

	void addTab(QIcon icon, QString toolTip = "");
	void insertTab(QIcon icon, int index, QString toolTip = "");
	void removeTab(int index);
	void hideTab(int index);
	void showTab(int index);

};

#endif // INDIGOTABBAR_H

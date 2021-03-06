#pragma once

#include <QtWidgets/QMainWindows>
#include "ui_PearlCannonHelper.h"

#include "Pearl.h"
#include "Setting.h"

struct SortingData
{
	double dis;
	vec3d pos;
	int tick;
	Setting setting;
};

class PearlCannonHelper : public QMainWindow
{
	Q_OBJECT
		
public:
	PearlCannonHelper(QWidget* parent = Q_NULLPTR);

public slots:
	void on_copyBitPushButton_clicked();
	void on_pasteBitPushButton_clicked();
	void on_genPushButton_clicked();
	void on_languageComboBox_activated(int);
	void on_srttingTableWidget_cellClicked(int, int);
	void on_pplyPushButton_pressed();
	void on_rotationComboBox_currentTextChnged();
	void generateTrace();
	void updateSetting();
	void updatePearlInfo();
	void updateAll();
	void tryLoadBitSeq(QString);
	void sortSettingTable(int);

private:
	Pearl getPearl();
	void loadSetting();
	void saveSetting();
	void updateResult();
	Ui::PearlCannonHelperClass ui;
	Setting setting;
	QVector<SortingData>result;
	bool flag_initializing;
	int lastClickedSettingColumn;
};
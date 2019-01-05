#pragma once

#include <QtWidgets/QWidget>
#include "ui_XVideoUI.h"

class XVideoUI : public QWidget
{
	Q_OBJECT

public:
	XVideoUI(QWidget *parent = Q_NULLPTR);


	virtual void timerEvent(QTimerEvent *event);

public slots:
	void Open();
	void Play();
	void Pause();
	void SliderPress();
	void SliderRelease();
	//�������϶�
	void SetPos(int);
	//���ù�����
	void Set();
	//������Ƶ
	void Export();
	//�������
	void ExportEnd();

private:
	Ui::XVideoUIClass ui;

	bool			pressSlider = false;
};
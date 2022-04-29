#pragma once

#include <QString>
#include "vec3d.h"

class Setting
{
public:
	//½á¹¹Rotation
	static int rotation;

	Setting();
	Setting(int, int, int, int);
	Setting(Qstring);
	~Setting();
	QString toString();
	vec3d getThrust();

	int amount_1, amount_r, direction, pitch;

};
#ifndef _DISPLAY_NHDC12832A1ZFSWFBW3V3_H_
#define _DISPLAY_NHDC12832A1ZFSWFBW3V3_H_

// Copyright (C) 2015  Frode Roxrud Gill
// See LICENSE file for license

#include "../../defines.h"


class DisplayNHDC12832A1ZFSWFBW3V3
{
public:
	enum BacklightStatus
	{
		ON,
		OFF
	};
	
public:
	DisplayNHDC12832A1ZFSWFBW3V3();
	~DisplayNHDC12832A1ZFSWFBW3V3();
	
public:
	void SetBrightness(double UNUSED(brightness)) {}
	void SetBacklightStatus(BacklightStatus UNUSED(status)) {}

	void ClearDisplay() {}
	void RefreshDisplay() {}

};

#endif // _DISPLAY_NHDC12832A1ZFSWFBW3V3_H_
